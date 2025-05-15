#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void setInfo(const std::string& fname, const std::string& lname,
            const std::string& nick, const std::string& phone,
            const std::string& secret);

        std::string getField(const std::string& fieldName) const;
};

#endif