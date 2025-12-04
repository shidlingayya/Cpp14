#include <iostream>
#include <type_traits>

constexpr int get_value(int x) 
{
    switch (x) 
    {
        case 0: return 10;
        case 1: return 20;
        case 2: return 30;
        default: return -1;
    }
}

int main() 
{
    constexpr int v = get_value(1);  // evaluated at compile time
    std::cout << v << "\n";          // prints 20
}