#include "CryptoCore.hpp"
#include <iostream>
#include <string>

void menu(){
    CryptoCore Crypto;
    int option, under_option, key_leght;
    std::string inputPath, outputPath, algorithm, key, filePath;

    std::cout<<"==========BlackCrypt==========\n\n";

    std::cout<<"1. encrypt\n";
    std::cout<<"2. decrypt\n";
    std::cout<<"3. encrypt with key file\n";
    std::cout<<"4. decrypt with key file\n";
    std::cout<<"5. generate and save key to file\n";
    std::cout<<"6. quit\n";
    std::cout<<"Choose option: \n";
    std::cin>>option;

    switch(option){
        //encrypt
        case 1:{
            std::cout<<"1. encrypt via XOR\n";
            std::cout<<"2. encrypt via AES128\n";
            std::cout<<"Choose option: \n";
            std::cin>>under_option;
            switch(under_option){
                case 1:{
                    std::cout<<"==========XOR==========\n\n";

                    std::cout<<"enter input path to file\n";
                    std::cin>>inputPath;

                    std::cout<<"enter output path to file\n";
                    std::cin>>outputPath;

                    std::cout<<"enter key\n";
                    std::cin>>key;

                    Crypto.xorEncryptFile(inputPath, outputPath, key);
                    break;
                }
                
                case 2:{
                    std::cout<<"==========AES128==========\n\n";

                    std::cout<<"enter input path to file\n";
                    std::cin>>inputPath;

                    std::cout<<"enter output path to file\n";
                    std::cin>>outputPath;

                    std::cout<<"enter key\n";
                    std::cin>>key;

                    Crypto.aesEncryptFIle(inputPath, outputPath, key);
                    break;
                }

                default :{
                    std::cout<<"Invalid option\n";
                    break;
                }
            }
            break;
        }

        //decrypt
        case 2:{
            std::cout<<"1. decrypt via XOR\n";
            std::cout<<"2. decrypt via AES128\n";
            std::cout<<"Choose option: \n";
            std::cin>>under_option;
            switch(under_option){
                case 1:{
                    std::cout<<"==========XOR==========\n\n";
                    std::cout<<"enter input path to file\n";
                    std::cin>>inputPath;

                    std::cout<<"enter output path to file\n";
                    std::cin>>outputPath;

                    std::cout<<"enter key\n";
                    std::cout<<key;

                    Crypto.xorDecryptFile(inputPath, outputPath, key);
                    break;
                }

                case 2:{
                    std::cout<<"==========AES128==========\n\n";
                    std::cout<<"enter input path to file\n";
                    std::cin>>inputPath;

                    std::cout<<"enter output path to file\n";
                    std::cin>>outputPath;

                    std::cout<<"enter key\n";
                    std::cin>>key;

                    Crypto.aesDecryptFile(inputPath, outputPath, key);
                    break;
                }

                default :{
                    std::cout<<"Invalid option\n";
                    break;
                }
            }
        }

        //encrypt with key file
        case 3:{
            std::cout<<"enter input path to file\n";
            std::cin>>inputPath;

            std::cout<<"enter output path to file\n";
            std::cin>>outputPath;

            std::cout<<"choose algorithm(XOR, AES128)\n";
            std::cin>>algorithm;

            std::cout<<"enter key file path\n";
            std::cin>>filePath;

            Crypto.encryptWithKeyFile(inputPath, outputPath, algorithm, filePath);
            break;
        }

        //decrypt with key file
        case 4:{
            std::cout<<"enter input path to file\n";
            std::cin>>inputPath;

            std::cout<<"enter output path to file\n";
            std::cin>>outputPath;

            std::cout<<"choose algorithm(XOR, AES128)\n";
            std::cin>>algorithm;

            std::cout<<"enter key file path\n";
            std::cin>>filePath;

            Crypto.decryptWithKeyFile(inputPath, outputPath, algorithm, filePath);
            break;
        }

        //generate and save key to file
        case 5:{
            std::cout<<"1. generate key for XOR\n";
            std::cout<<"2. generate key for AES128\n";
            std::cin>>under_option;
            switch(under_option){
                case 1:{
                    std::cout<<"enter leght of key\n";
                    std::cin>>key_leght;

                    std::cout<<"enter file path to key\n";
                    std::cin>>filePath;

                    key = Crypto.xorGenerateKey(key_leght);
                    Crypto.saveKeyToFile(key, filePath);
                    break;
                }

                case 2:{
                    std::cout<<"enter file path to key\n";
                    std::cin>>filePath;

                    key = Crypto.aesGenerateKey();
                    Crypto.saveKeyToFile(key, filePath);
                    break;
                }

                default :{
                    std::cout<<"Invalid option\n";
                    break;
                }
            }
        }

        //quit
        case 6:{
            break;
        }
    }
}

int main()
{
   menu();
    return 0;
}