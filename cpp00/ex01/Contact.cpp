#include "Contact.hpp"
#include <iostream>

void Contact::setInfo(const std::string& fname, const std::string& lname,
    const std::string& nick, const std::string& phone,
    const std::string& secret) {
    this->firstName = fname;
    this->lastName = lname;
    this->nickname = nick;
    this->phoneNumber = phone;
    this->darkestSecret = secret;
}

std::string Contact::getField(const std::string& fieldName) const {
    if (fieldName == "first_name") return firstName;
    else if (fieldName == "last_name") return lastName;
    else if (fieldName == "nickname") return nickname;
    else if (fieldName == "phone_number") return phoneNumber;
    else if (fieldName == "darkest_secret") return darkestSecret;
    return "";
}