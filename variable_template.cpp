#include <iostream>
template <typename T>
T pi = T(3.14159265358979323846);

int main()
{
    std::cout.precision(std::numeric_limits<long double>::max_digits10);
    std::cout << pi<int> << std::endl;
    std::cout << pi<float> << std::endl;
    std::cout << pi<double> << std::endl;
    std::cout << pi<long double> << std::endl;
}