#include <iostream>
#include <utility>

[[deprecated("Use newer version of this function")]]
void get_reversed_str(std::string& str)
{
    for (auto i = 0U; i < str.size() / 2; ++i)
    {
        std::swap(str[i], str[str.size() - 1]);
    }
}

int main()
{
    std::string str = "Hello World";
    std::cout << "Before Reversal: str: " << str << std::endl;
    get_reversed_str(str);
    std::cout << "After Reversal: str: " << str << std::endl;
}