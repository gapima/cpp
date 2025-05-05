#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to PhoneBook!" << std::endl;

    while (true) {
        std::cout << "\nEnter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (std::cin.eof()) break;

        if (command == "ADD") {
            Contact newContact;
            std::string fname, lname, nick, phone, secret;

            std::cout << "First Name: ";
            std::getline(std::cin, fname);
            std::cout << "Last Name: ";
            std::getline(std::cin, lname);
            std::cout << "Nickname: ";
            std::getline(std::cin, nick);
            std::cout << "Phone number: ";
            std::getline(std::cin, phone);
            std::cout << "Darkest Secret: ";
            std::getline(std::cin, secret);

            newContact.setInfo(fname, lname, nick, phone, secret);
            phoneBook.addContact(newContact);
        } else if (command == "SEARCH") {
            phoneBook.searchContacts();
        } else if (command == "EXIT") {
            std::cout << "Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid command. Try again." << std::endl;
        }
    }
    return 0;
}