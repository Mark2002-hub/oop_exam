#include <iostream>
#include <cmath>

bool is_palindrom(const std::string& s)
{
    auto length = s.size();
    for (std::size_t i = 0; i < std::floor(length / 2); ++i)
    {
        if (s[i] != s[length - 1 -i])
            return false;
    }
    return true;
}

int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}