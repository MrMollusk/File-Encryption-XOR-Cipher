#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>
#include <vector>

std::string encryptFile(const std::string& input, const std::string& key);

std::string decryptFile(const std::string& input, const std::string& key);

#endif
