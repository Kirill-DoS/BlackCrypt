#pragma once
#include <string>
#include <vector>

class AES128 {
public:

    static std::vector<unsigned char> encryptData(const std::vector<unsigned char>& data, const std::string& key);
    static std::vector<unsigned char> decryptData(const std::vector<unsigned char>& data, const std::string& key);
    

    static bool encryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);
    static bool decryptFile(const std::string& inputPath, const std::string& outputPath, const std::string& key);
    

    static std::string generateKey();
    static bool isValidKey(const std::string& key);
};