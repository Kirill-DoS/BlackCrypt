#pragma once
#include <string>
#include <vector>

class XOR_Cipher{
    public:
    static std::string encryptDecrypt(const std::string& input, const std::string& key);

    static bool encryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);

    static bool decryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);

    static std::string generateKey(int leght = 16);

    static bool isValidKey(const std::string& key);
};