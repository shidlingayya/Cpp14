#include <iostream>
#include <type_traits>

int main()
{
    int b = 0xFF; //before C++14 Standard
    std::cout << "Value of b: " << b << std::endl;

    int b1 = 0b1111'1111; //In C++14 Standard
    std::cout << "Value of b1: " << b1 << std::endl;
}

