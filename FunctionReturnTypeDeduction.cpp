#include <iostream>
auto getValue()
{
    int ii = 10;
    return ii;
}

int main()
{
    int&& ref = getValue();
    std::cout << "ref: " << ref << std::endl;
    return 0;
}