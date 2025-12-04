#include <iostream>
#include <type_traits>

constexpr std::size_t cstrlen(const char* s) 
{
    std::size_t len = 0;
    for (; s[len] != '\0'; ++len) {}
    return len;
}

int main() {
    constexpr std::size_t n = cstrlen("hello"); //Evaluated at compile time
    static_assert(n == 5);
}

