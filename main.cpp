#include <iostream>
#include <string_view>
#include <string>

void print(std::string_view output)
{
	std::cout << output << '\n';
}

int main()
{
	std::string output{"Hello world!"};
	print(output);
	return 0;
}
