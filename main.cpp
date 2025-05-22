#include <plog/Log.h> 
#include <plog/Initializers/RollingFileInitializer.h> 
#include <iostream>

int getUserInput()
{
	PLOGD << "getUserInput() called"; //plogd is defined by plog lib;
					  //clog is std c++ for loging but only does console output where as plog is for a seperate log files
					  //as a side, clog uses cerr to write to standard error stream	
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main ()
{
	plog::init(plog::debug, "Logfile.txt"); // initilize the plog logger
	
	PLOG << "main() called";

	int x{getUserInput()};
	std::cout << "You entered: " << x << '\n';

	return 0;
}
