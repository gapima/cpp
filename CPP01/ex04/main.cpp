#include "Replacer.hpp"
#include <iostream>

int main(int ac, char ** av) {
    if (ac != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }

    Replacer replacer(filename, s1, s2);
    if (!replacer.process()) {
        return 1;
    }

    std::cout << "File created: " << filename << ".replace" << std::endl;
    return 0;
}