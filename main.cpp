#include <iostream>
#include <cmath>
#include <cassert>

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