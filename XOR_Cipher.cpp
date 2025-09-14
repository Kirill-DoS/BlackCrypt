#include "XOR_Cipher.hpp"
#include <fstream>
#include <random>
#include <stdexcept>

std::string XOR_Cipher::encryptDecrypt(const std::string& input, const std::string& key){
    if(key.empty()){
        throw std::invalid_argument("Key cannot br empty!");
    }

    std::string output;
    output.reserve(input.size());

    for(size_t i = 0; i < input.size(); i++){
        char keyChar = key[i % key.size()];
        output.push_back(input[i] ^ keyChar);
    }
    return output;
}

bool XOR_Cipher::encryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key){
    if(!isValidKey(key)){
        return false;
    }

    std::ifstream inputFile(inputPath, std::ios::binary);
    if(!inputFile.is_open()){
        return false;
    }

    std::ofstream outputFile(outputPath, std::ios::binary);
    if(!outputFile.is_open()){
        inputFile.close();
        return false;
    }

    const size_t bufferSize = 4096;
    char buffer[bufferSize];

    while(inputFile.read(buffer, bufferSize) || inputFile.gcount() > 0){
        std::string chunk(buffer, inputFile.gcount());
        std::string encryptedChunk = encryptDecrypt(chunk, key);
        outputFile.write(encryptedChunk.c_str(), encryptedChunk.size());
    }

    inputFile.close();
    outputFile.close();
    return true;
}

bool XOR_Cipher::decryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key){
    return encryptFile(inputPath, outputPath, key);
}

std::string XOR_Cipher::generateKey(int leght){
    if(leght <=0 ){
        leght = 16;
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 255);

    std::string key;
    key.reserve(leght);

    for(int i = 0; i < leght; ++i){
        key.push_back(static_cast<char>(dis(gen)));
    }

    return key;
}

bool XOR_Cipher::isValidKey(const std::string& key){
    return !key.empty();
}