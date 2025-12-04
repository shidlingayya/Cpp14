#include <iostream>
auto getValue()
{
    int ii = 10;
    if (ii == 10)
    {
        return 100;
    }
    else
    {
        return false; //ERROR, All return type must be same in function to use auto feature
    }
}

int main()
{
    int&& ref = getValue();
    std::cout << "ref: " << ref << std::endl;
    return 0;
}