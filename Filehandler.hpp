#pragma once
#include <string>
#include <vector>

class FileHandler{
public:
    //read file in line
    static std::string readFile(const std::string& filePath);
    //write lines in file
    static bool writeFile(const std::string& filePath, const std::string& content);
    //read bin file
    static std::vector<unsigned char> readBinaryFile(const std::string& filePath);
    //write bin file
    static bool writeBinaryFile(const std::string& filePath, const std::vector<unsigned char>& data);
    //check file existence
    static bool fileExists(const std::string& filePath);
    //get file size
    static size_t getFileSize(const std::string& filePath);
};
