#include <iostream> 

int main (){
	std::string name{"Adam"}; //user's name list initialization -- prefered way to initialize in modern cpp 
	std::cout << "Hello " << name << "\nMy name is: ";
	std::cin >> name; //input user's name 
	std::cout << "Hiii " << name << " how are you?" <<std::endl;
}
