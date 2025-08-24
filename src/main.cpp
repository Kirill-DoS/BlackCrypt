#include "CryptoCore.hpp"
#include <iostream>
#include <string>

void XOR_menu()
{
    CryptoCore crypto;
    int option;
    std::string inputPath;
    std::string outputPath;
    std::string key;
    std::string keyFilePath;
    std::string algorithm;

    std::cout << "-----XOR crypto-----\n\n\n";
    std::cout << "1: Enctypr file\n";
    std::cout << "2: Decrypt file\n";
    std::cout << "3: Generate and save key\n";
    std::cout << "4: Encrypt using key file\n";
    std::cout << "5: Decrypt using key file\n";
    std::cout << "6: Quit\n";
    std::cout << "Choose option: ";
    std::cin >> option;
    std::cout << '\n';

    switch (option)
    {
    case 1:
    {
        std::cout << "Enter path to input file: \n";
        std::cin >> inputPath;

        std::cout << "Enter path to output file: \n";
        std::cin >> outputPath;

        std::cout << "Enter key: \n";
        std::cin >> key;

        std::cout << "Start XOR crypto: \n";
        crypto.xorEncryptFile(inputPath, outputPath, key);
        std::cout << "-----XOR done successfull!-----\n";

        break;
    }

    case 2:
    {
        std::cout << "Enter path to input file: \n";
        std::cin >> inputPath;

        std::cout << "Enter path to output file: \n";
        std::cin >> outputPath;

        std::cout << "Enter key: \n";
        std::cin >> key;

        std::cout << "Start XOR decrypto: \n";
        crypto.xorDecryptFile(inputPath, outputPath, key);
        std::cout << "-----XOR done successfull!-----\n";

        break;
    }

    case 3:
    {
        int leght;
        std::cout << "Key leght: \n";
        std::cin >> leght;

        std::cout << "Key file to save: \n";
        std::cin >> keyFilePath;

        std::string generatedKey = crypto.xorGenerateKey(leght);
        bool saved = crypto.saveKeyToFile(generatedKey, keyFilePath);

        if (saved)
        {
            std::cout << "Key generate and save to: " << keyFilePath << std::endl;
            std::cout << "Key: " << generatedKey << std::endl;
        }
        else
        {
            std::cout << "Failed to save key! \n";
        }
        break;
    }

    case 4:
    {
        std::cout << "Input file: \n";
        std::cin >> inputPath;

        std::cout << "Output file: \n";
        std::cin >> outputPath;

        std::cout << "Algorithm(XOR, AES): \n";
        std::cin >> algorithm;

        std::cout << "Key file: \n";
        std::cin >> keyFilePath;

        bool success = crypto.encryptWithKeyFile(inputPath, outputPath, algorithm, keyFilePath);
        std::cout << (success ? "Success!" : "Failed!") << std::endl;
        break;
    }

    case 5:
    {
        std::cout << "Input file: \n";
        std::cin >> inputPath;

        std::cout << "Output file: \n";
        std::cin >> outputPath;

        std::cout << "Algorithm(XOR, AES): \n";
        std::cin >> algorithm;

        std::cout << "Key file: \n";
        std::cin >> keyFilePath;

        bool success = crypto.decryptWithKeyFile(inputPath, outputPath, algorithm, keyFilePath);
        std::cout << (success ? "Success!" : "Failed!") << std::endl;
        break;
    }

    case 6:
    {
        return;
    }

    default:
    {
        std::cout << "Infalid option!\n";

        break;
    }
    }
}

int main()
{
    XOR_menu();
    return 0;
}