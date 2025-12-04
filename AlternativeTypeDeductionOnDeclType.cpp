#include <iostream>
int main()
{
    int lvalue = 4;
    int& rvalue = lvalue;
    auto lvalue2 = rvalue; //auto drops reference type
    decltype(auto) rvalue2 = rvalue;
    std::cout << (&lvalue == &rvalue) << std::endl;
    std::cout << (&lvalue == &rvalue2) << std::endl;
    std::cout << (&lvalue2 == &rvalue) << std::endl;
    std::cout << (&lvalue == &lvalue2) << std::endl;
}