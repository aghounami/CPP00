#include "PhoneBook.hpp"
#include <iomanip>

void    PhoneBook::searchContact()
{
    std::string input;
    int i = 0;
    if (index == 0)
    {
        std::cout << "PhoneBook is empty" << std::endl;
        return ;
    }
    else
        {
        std::cout << "\033[1;37m" 
                  << "-------------------------------------------------------------" << std::endl
                  << "|    INDEX     |  FIRST NAME  |   LAST NAME  |   NICKNAME   |" << std::endl
                  << "-------------------------------------------------------------" << "\033[0m" << std::endl;
        for (int i = 0; i < index; ++i){
            std::cout << "\033[1;37m"
                      << "|" << std::setw(7) << i << "       |"
                      << std::setw(14) << Contact[i][0].substr(0, 14) << "|"
                      << std::setw(14) << Contact[i][1].substr(0, 14) << "|"
                      << std::setw(14) << Contact[i][2].substr(0, 14) << "|"
                      << "\033[0m" << std::endl;
        }
        std::cout << "\033[1;37m"
                  << "-------------------------------------------------------------" << "\033[0m" << std::endl;
    }
    std::cout << "\033[1;37m" << "Enter an index: " << "\033[0m";
    getline(std::cin, input);
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        i = input[0] - '0';
        std::cout << "\033[1;37m" 
        << "FIRST NAME: " << Contact[i][0] << std::endl
        << "LAST NAME: " << Contact[i][1] << std::endl
        << "NICKNAME: " << Contact[i][2] << std::endl
        << "PHONE NUMBER: " << Contact[i][3] << std::endl
        << "DARKEST SECRET: " << Contact[i][4] << "\033[0m" << std::endl;
    }
    else
        std::cout << "\033[1;37m" << "Invalid index" << "\033[0m" << std::endl;
}

void    PhoneBook::name(int i)
{
    while (1)
    {
        getline(std::cin, Contact[index][i]);
        if (std::cin.eof())
        {
            std::cout << "\033[1;37m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (std::all_of(Contact[index][i].begin(), Contact[index][i].end(), ::isalpha))
            break;
        else
            std::cout  << "\033[1;37m" << "enter a valid character: " << "\033[0m";

    }
    if (Contact[index][i].length() > 10)
        Contact[index][i] = Contact[index][i].substr(0, 10) + ".";
}

void    PhoneBook::phone_number()
{
    while (1)
    {
        getline(std::cin, Contact[index][3]);
        if (std::cin.eof())
        {
            std::cout << "\033[1;37m" << "\nEnd of input detected. Exiting..."  << "\033[0m" << std::endl;
            std::cin.clear();
            exit(0);
        }
        if (std::all_of(Contact[index][3].begin(), Contact[index][3].end(), ::isdigit) && (Contact[index][3].length() > 5 && Contact[index][3].length() < 15))
            break;
        else
            std::cout  << "\033[1;37m" << "enter a valid number: " << "\033[0m";
    }
}

void    PhoneBook::addContact()
{
    static int i = 0;
    
    if (index < 8)
    {
        std::cout << "\033[1;37m" << "FIRST NAME: " << "\033[0m";
        name(0);
        std::cout << "\033[1;37m" << "LAST NAME: " << "\033[0m";
        name(1);
        std::cout << "\033[1;37m" << "NICKNAME: " << "\033[0m";
        name(2);
        std::cout << "\033[1;37m" << "PHONE NUMBER: " << "\033[0m";
        phone_number();
        std::cout << "\033[1;37m" << "DARKEST SECRET: " << "\033[0m";
        getline(std::cin, Contact[i][4]);
        index++;
    }
    else
    {
        if (i < 8)
        {
            std::cout << "\033[1;37m" << "FIRST NAME: " << "\033[0m";
            name(0);
            std::cout << "\033[1;37m" << "LAST NAME: " << "\033[0m";
            name(1);
            std::cout << "\033[1;37m" << "NICKNAME: " << "\033[0m";
            name(2);
            std::cout << "\033[1;37m" << "PHONE NUMBER: " << "\033[0m";
            phone_number();
            std::cout << "\033[1;37m" << "DARKEST SECRET: " << "\033[0m";
            getline(std::cin, Contact[i][4]);
            i++;
        }
        if (i == 8)
            i = 0;
    }
}
