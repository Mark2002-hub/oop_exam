#include <iostream>
#include <cmath>
#include <cassert>

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
    assert(is_palindrom("abba") && 
		   "\"abba\" is palinddrom");
	assert(!is_palindrom("alpha") &&
		   "\"alpha\" is not palindrom");
	assert(is_palindrom("0") &&
		   "single-char string is palindrom");
	assert(is_palindrom("") &&
		   "empty string is palindrom");
    std::cout << "All tests passed" << std::endl;
    return 0;
}