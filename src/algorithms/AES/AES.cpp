#include "AES.hpp"
#include "encoding.h"
#include "decoding.h" 
#include "key_expand.h"
#include "Filehandler.hpp"
#include <stdexcept>
#include <random>
#include <vector>

// Шифрование данных в памяти
std::vector<unsigned char> AES128::encryptData(const std::vector<unsigned char>& data, const std::string& key) {
    if (key.size() != 16) {
        throw std::invalid_argument("AES-128 requires exactly 16-byte key");
    }
    
    // Подготовка ключа
    unsigned char aesKey[16];
    for (int i = 0; i < 16; i++) {
        aesKey[i] = key[i];
    }
    
    // Расширение ключа
    unsigned char extendedKeys[176];
    Key_extenxion(aesKey, extendedKeys);
    
    // Шифрование по блокам по 16 байт
    std::vector<unsigned char> result;
    size_t paddedSize = data.size() + (16 - (data.size() % 16));
    result.reserve(paddedSize);
    
    for (size_t i = 0; i < data.size(); i += 16) {
        unsigned char block[16] = {0};
        size_t blockSize = std::min(size_t(16), data.size() - i);
        
        // Копируем данные в блок
        for (size_t j = 0; j < blockSize; j++) {
            block[j] = data[i + j];
        }
        
        // Дополнение PKCS7 (если блок не полный)
        if (blockSize < 16) {
            unsigned char padValue = 16 - blockSize;
            for (size_t j = blockSize; j < 16; j++) {
                block[j] = padValue;
            }
        }
        
        // Шифруем блок
        encryption(block, extendedKeys);
        
        // Добавляем к результату
        for (int j = 0; j < 16; j++) {
            result.push_back(block[j]);
        }
    }
    
    return result;
}

// Дешифрование данных в памяти
std::vector<unsigned char> AES128::decryptData(const std::vector<unsigned char>& data, const std::string& key) {
    if (key.size() != 16) {
        throw std::invalid_argument("AES-128 requires exactly 16-byte key");
    }
    if (data.size() % 16 != 0) {
        throw std::invalid_argument("Encrypted data size must be multiple of 16");
    }
    
    // Подготовка ключа
    unsigned char aesKey[16];
    for (int i = 0; i < 16; i++) {
        aesKey[i] = key[i];
    }
    
    // Расширение ключа
    unsigned char extendedKeys[176];
    Key_extenxion(aesKey, extendedKeys);
    
    // Дешифрование по блокам
    std::vector<unsigned char> result;
    result.reserve(data.size());
    
    for (size_t i = 0; i < data.size(); i += 16) {
        unsigned char block[16];
        
        // Копируем зашифрованный блок
        for (int j = 0; j < 16; j++) {
            block[j] = data[i + j];
        }
        
        // Дешифруем блок
        decryption(block, extendedKeys);
        
        // Добавляем к результату
        for (int j = 0; j < 16; j++) {
            result.push_back(block[j]);
        }
    }
    
    // Удаляем дополнение PKCS7
    if (!result.empty()) {
        unsigned char padValue = result.back();
        if (padValue > 0 && padValue <= 16) {
            result.resize(result.size() - padValue);
        }
    }
    
    return result;
}

// Шифрование файла
bool AES128::encryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key) {
    auto data = FileHandler::readBinaryFile(inputPath);
    if (data.empty()) return false;
    
    try {
        auto encryptedData = encryptData(data, key);
        return FileHandler::writeBinaryFile(outputPath, encryptedData);
    } catch (const std::exception& e) {
        return false;
    }
}

// Дешифрование файла
bool AES128::decryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key) {
    auto data = FileHandler::readBinaryFile(inputPath);
    if (data.empty()) return false;
    
    try {
        auto decryptedData = decryptData(data, key);
        return FileHandler::writeBinaryFile(outputPath, decryptedData);
    } catch (const std::exception& e) {
        return false;
    }
}

// Генерация ключа
std::string AES128::generateKey() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 255);
    
    std::string key;
    key.reserve(16);
    
    for (int i = 0; i < 16; ++i) {
        key.push_back(static_cast<char>(dis(gen)));
    }
    
    return key;
}

// Проверка ключа
bool AES128::isValidKey(const std::string& key) {
    return key.size() == 16;
}