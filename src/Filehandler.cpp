#include "Filehandler.hpp"
#include <fstream>
#include <iostream>
#include <sys/stat.h>

std::string FileHandler::readFile(const std::string& filePath){
    std::ifstream file(filePath, std::ios::binary);
    if(!file.is_open()){
        std::cerr<<"Error: cannot open file "<< filePath<<std::endl;
        return "";
    }

    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return content;
}

bool FileHandler::writeFile(const std::string& filePath, const std::string& content){
    std::ofstream file(filePath, std::ios::binary);
    if(!file.is_open()){
        std::cerr<<"Error: cannot create file " << filePath<<std::endl;
        return false;
    }
    
    file.write(content.c_str(), content.size());
    file.close();
    return true;

}

std::vector<unsigned char> FileHandler::readBinaryFile(const std::string &filePath){
    std::ifstream file(filePath, std::ios::binary);
    if(!file.is_open()){
        return {};
    }

    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<unsigned char> buffer(size);
    file.read(reinterpret_cast<char*>(buffer.data()), size);
    file.close();

    return buffer;
}

bool FileHandler::writeBinaryFile(const std::string &filePath, const std::vector<unsigned char> &data){
    std::ofstream file(filePath, std::ios::binary);
    if(!file.is_open()){
        return false;
    }

    file.write(reinterpret_cast<const char*>(data.data()), data.size());
    file.close();
    return true;
}

bool FileHandler::fileExists(const std::string &filePath){
    struct stat buffer;
    return (stat(filePath.c_str(), &buffer) == 0);
}

size_t FileHandler::getFileSize(const std::string &filePath){
    struct stat stat_buf;
    int rc = stat(filePath.c_str(), &stat_buf);
    return rc == 0 ? stat_buf.st_size : 0;
}
