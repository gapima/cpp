#include "Harl.hpp"
#include <iostream>

int getLevelIndex(const std::string& level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i])
            return i;
    }
    return -1;
}

int main(int ac, char** av) {
    if (ac != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    Harl harl;
    std::string level = av[1];

    switch (getLevelIndex(level)) {
        case 0:
            harl.complain("DEBUG");
            std::cout << std::endl;
            /* fallthrough */
        case 1:
            harl.complain("INFO");
            std::cout << std::endl;
            /* fallthrough */
        case 2:
            harl.complain("WARNING");
            std::cout << std::endl;
            /* fallthrough */
        case 3:
            harl.complain("ERROR");
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}