#include "FileManager.h"
#include <fstream>
#include <iostream>

bool saveToFile(const std::string& filename, const std::string& data) {

    std::ofstream file(filename, std::ios::binary);

    if (!file.is_open()) {
        std::cout << "Cant save file" << filename << "\n";
        return false;
    }

    file.write(data.c_str(), data.size());

    file.close();

    return true;
}

std::string loadFromFile(const std::string& filename) {

    std::ifstream file(filename, std::ios::binary);

    if (!file.is_open()) {
        std::cout << "Cant load file" << filename << "\n";
        return "";
    }

    std::string data((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    file.close();

    return data;
}
