#include <iostream>
#include <type_traits>

template <typename T>
void fun(const T& x)
{
    if constexpr (std::is_integral_v<T>)
    {
        std::cout << x << " is integral\n";
    }
    else
    {
        std::cout << x << " is not integral\n";
    }
}

int main()
{
    fun(5);     // integral
    fun(3.14);  // not integral
}
