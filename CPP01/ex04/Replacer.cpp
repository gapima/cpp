#include "Replacer.hpp"
#include <fstream>
#include <iostream>

Replacer::Replacer(const std::string& inputFile, const std::string& s1, const std::string& s2)
    : _inputFile(inputFile), _s1(s1), _s2(s2) {}

bool Replacer::process() {
    std::ifstream ifs(_inputFile.c_str());
    if (!ifs.is_open()) {
        std::cerr << "Error: Cannot open file " << _inputFile << std::endl;
        return false;
    }

    std::string content((std::istreambuf_iterator<char>(ifs)),
                         std::istreambuf_iterator<char>());
    ifs.close();

    std::string replacedContent = replaceAll(content);

    std::ofstream ofs((_inputFile + ".replace").c_str());
    if (!ofs.is_open()) {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return false;
    }

    ofs << replacedContent;
    ofs.close();
    return true;
}

std::string Replacer::replaceAll(const std::string& content) {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(_s1, pos)) != std::string::npos) {
        result.append(content, pos, found - pos);
        result.append(_s2);
        pos = found + _s1.length();
    }
    result.append(content, pos);
    return result;
}
