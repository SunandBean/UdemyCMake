#include <iostream>

#include "my_lib.h"

int print_hello_world(bool flag)
{
    if (flag){


    std::cout << "Cout: Hello World" << '\n';
    }
    else {
        std::cout << "Example" << '\n';
    }
    return 1;
}

unsigned int factorial(unsigned int number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
