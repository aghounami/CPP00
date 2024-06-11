#include <iostream>
#include <string>

int main(int argc, char **argv) {
    int i = 1;
    int j = 0;
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while (argv[i]) {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]); 
            j++;
        }
        i++;
        if (i < argc) std::cout << " ";
    }
    std::cout << std::endl;
}
