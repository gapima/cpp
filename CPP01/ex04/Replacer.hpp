#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <string>

class Replacer {
    public:
        Replacer(const std::string& inputFile, const std::string& s1, const std::string& s2);
        bool process();

    private:
        std::string _inputFile;
        std::string _s1;
        std::string _s2;

        std::string replaceAll(const std::string& content);
};

#endif