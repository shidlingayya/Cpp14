#include <iostream>
#include <type_traits>

constexpr int sum_up_to(int n) 
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    return sum;
}

int main() 
{
    constexpr int s = sum_up_to(5);  // computed at compile time
    static_assert(s == 15, "Error!");
}
