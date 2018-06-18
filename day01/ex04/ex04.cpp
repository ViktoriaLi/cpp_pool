#include <iostream>

int main(void)
{
	std::string sub_str = "HI THIS IS BRAIN";

	std::string *point = &sub_str;

	std::string &refer = sub_str;

	std::cout << *point << std::endl;
	std::cout << refer << std::endl;
}
