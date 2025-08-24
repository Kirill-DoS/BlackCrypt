#include "algorithms/XOR_Cipher.hpp"
#include "CryptoCore.hpp"
#include "Filehandler.hpp"

bool CryptoCore::xorEncryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key){
    return XOR_Cipher::encryptFile(inputPath, outputPath, key);
}

bool CryptoCore::xorDecryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key){
    return XOR_Cipher::decryptFile(inputPath, outputPath, key);
};

std::string CryptoCore::xorGenerateKey(int leght){
    return XOR_Cipher::generateKey(leght);
}

bool CryptoCore::saveKeyToFile(const std::string &key, const std::string &filePath){
    if(key.empty()){
        std::cerr<<"Error! key is empty\n";
        return false;
    }
    return FileHandler::writeFile(filePath, key);
}

std::string CryptoCore::loadKeyFromFile(const std::string &filePath){
    std::string key = FileHandler::readFile(filePath);
    if(key.empty()){
        std::cerr<<"Error! cannot read key from file or key is empty\n";
    }
    return key;
}

bool CryptoCore::encryptWithKeyFile(const std::string &inputPath, const std::string &outputPath, const std::string &algorithm, const std::string &keyFilePath){
    std::string key = loadKeyFromFile(keyFilePath);
    if(key.empty()){
        return false;
    }

    if(algorithm == "XOR"){
        return xorEncryptFile(inputPath, outputPath, key);
    }
}

bool CryptoCore::decryptWithKeyFile(const std::string &inputPath, const std::string &outputPath, const std::string &algorithm, const std::string &keyFilePath){
    std::string key = loadKeyFromFile(keyFilePath);
    if(key.empty()){
        return false;
    }

    if(algorithm == "XOR"){
        return xorDecryptFile(inputPath, outputPath, key);
    }
}
