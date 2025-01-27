#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <vector>

bool saveToFile(const std::string& filename, const std::string& data);

std::string loadFromFile(const std::string& filename);

#endif
