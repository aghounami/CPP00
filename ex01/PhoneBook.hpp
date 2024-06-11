#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook {
    public:
        std::string Contact[8][5];
        int index;
        void searchContact();
        void addContact();
        void name(int i);
        void phone_number();
};
#endif