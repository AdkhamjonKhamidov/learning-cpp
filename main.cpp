#include <iostream>
#include <cstdint> 

int main()
{
	std::int32_t signedBit32{2147483647};
	std::uint32_t unsignedBit32{4294967295};
	std::cout << "largest signed 32 bit int: " << signedBit32 
		<< "\nlargest un-signed 32 bit int: " << unsignedBit32 << '\n';
	return 0;
}
