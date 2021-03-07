// https://en.cppreference.com/w/cpp/string/basic_string

#include <iostream>
#include <type_traits>

int main()
{
	std::string str = "asdf";
	str.clear();
	
	std::cout << str << std::endl;

	return 0;	
}