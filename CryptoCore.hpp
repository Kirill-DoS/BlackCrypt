#pragma once
#include <iostream>

class CryptoCore{
public:
    //================XOR============
    static bool xorEncryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);
    static bool xorDecryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);
    std::string xorGenerateKey(int leght);

    //============AES==============
    static bool aesEncryptFIle(const std::string& inputPath, const std::string& outputPath, const std::string& key);
    static bool aesDecryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);
    static std::string aesGenerateKey();
    static bool aesIsValidKey(const std::string& key, const std::string& filePath);

    //============General methods=======
    static bool saveKeyToFile(const std::string& key, const std::string& filePath);
    static std::string loadKeyFromFile(const std:: string& filePath);
    static bool encryptWithKeyFile(const std::string& inputPath, const std::string& outputPath, const std::string& algorithm, const std::string& keyFilePath);
    static bool decryptWithKeyFile(const std::string& inputPath, const std::string& outputPath, const std::string& algorithms, const std::string& keyFilePath);

};
