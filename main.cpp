#include <iostream>
#include <string>
#include "Encryption.h"
#include "FileManager.h"

int main() {

    //Banana will be the key for encryption/decryption
    std::string key = "banana"; 

    //Data to be encrypted will be in this file
    std::string inputFile = "input.txt";

    //This file will store the encrypted data
    std::string outputFile = "output.txt";

    //Load input file data
    std::string data = loadFromFile(inputFile);

    //Encryption
    std::string encryption = encryptFile(data, key);
    std::cout << "Encrypted" << "\n";

    //Output file stores encrypted data
    if (!saveToFile(outputFile, encryption)) {
        std::cout << "Cant save encrypted data" << "\n";
        return 1;
    }

    //Data is decrypted
    std::string decrypted = decryptFile(encryption, key);
    std::cout << "Decrypted" << "\n";

    return 0;
}
