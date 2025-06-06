#include <iostream>
#include <bitset>
int main()
{
	std::bitset<8> bits {0b0000'0101}; //7654'3210
	std::cout << bits << " 5\n";
	bits.set(1); //sets 1 into 1: there is also reset to reset index, or flip to toggle
	std::cout << bits << " 7\n";
	return 0;

}
