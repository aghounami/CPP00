#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

PhoneBook::~PhoneBook()
{
}

int main()
{
    PhoneBook all;
    std::string command;

    while (1)
    {
        std::cout << "\033[1;37m" << "Enter a command: " << "\033[0m";
        getline(std::cin, command);
         if (std::cin.eof()) {
            std::cout << "\nEnd of input detected. Exiting..." << std::endl;
            std::cin.clear();
            break;
        }
        if (command == "EXIT")
            break;
        else if (command == "ADD")
            all.addContact();
        else if (command == "SEARCH")
            all.searchContact();
        else
        {
            std::cout << "Invalid command" << std::endl;
            std::cin.clear();
        }
    }
}

