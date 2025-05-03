#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook();
        void addContact(Contact contact);
        void searchContacts() const;
    private:
        Contact contacts[8];
        int contactCount;
};
#endif