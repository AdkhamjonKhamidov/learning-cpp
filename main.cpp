#include <iostream> 

int main (){
	std::string name{"Adam"}; //user's name list initialization -- prefered way to initialize in modern cpp 
	std::string lastName{" Khamidov"}; 
	std::cout << "Hello " << name << lastName << "\nMy name is: "; // \n is faster than endl as it doesn't flush the buffer
	std::cin >> name >> lastName; //input user's name 
	std::cout << "Hiii " << name << " " << lastName << " how are you?" << '\n'; //single char use single quotes ''
}
