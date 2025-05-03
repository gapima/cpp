#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

PhoneBook::PhoneBook() {
    contactCount = 0;
}

void PhoneBook::addContact(Contact contact) {
    int index = contactCount % 8;
    contacts[index] = contact;
    contactCount++;
    std::cout << "Contact successfully added to index " << index << "." << std::endl;
}

void printFormattedField(const std::string& field) {
    if (field.length() > 10)
        std::cout << field.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << field;
}

void PhoneBook::searchContacts() const {
    int total = contactCount > 8 ? 8 : contactCount;

    if (total == 0) {
        std::cout << "No contact available." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "|"
              << std::setw(10) << "Phone Number" << "|"
              << std::setw(10) << "Darkest Secret" << std::endl;
    
    for (int i = 0; i < total; i++) {
        std::cout << std::setw(10) << i << "|";
        printFormattedField(contacts[i].getField("first_name"));
        std::cout << "|";
        printFormattedField(contacts[i].getField("last_name"));
        std::cout << "|";
        printFormattedField(contacts[i].getField("nickname"));
        std::cout << "|";
        printFormattedField(contacts[i].getField("phone_number"));
        std::cout << "|";
        printFormattedField(contacts[i].getField("darkest_secret"));
        std::cout << std::endl;
    }
    std::cout << "Enter contact index to view details: ";
    int index;
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= total) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "invalid index." << std::endl;
        return;
    }

    std::cout << "First Name: "     << contacts[index].getField("first_name") << std::endl;
    std::cout << "Last Name: "     << contacts[index].getField("last_name") << std::endl;
    std::cout << "Nickname: "     << contacts[index].getField("nickname") << std::endl;
    std::cout << "Phone Number: "     << contacts[index].getField("phone_number") << std::endl;
    std::cout << "Darkest Secret: "     << contacts[index].getField("darkest_secret") << std::endl;
}