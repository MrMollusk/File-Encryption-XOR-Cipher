#include "Encryption.h"
#include <iostream>
#include <algorithm>

//XOR cipher for encyrption/decryption
std::string encryptFile(const std::string& input, const std::string& key) {

    std::string encrypted = input;

    for (size_t i = 0; i < encrypted.size(); ++i) {
        encrypted[i] ^= key[i % key.size()];
    }
    return encrypted;
}

std::string decryptFile(const std::string& input, const std::string& key) {

    return encryptFile(input, key);
}
