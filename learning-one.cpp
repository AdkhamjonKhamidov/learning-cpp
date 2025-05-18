#include <iostream> 

using namespace std;

int main (){
	if (__cplusplus == 202002L) cout << "c++20" << endl;
	else if (__cplusplus == 201703L) cout << "c++17" << endl;
	else if (__cplusplus == 201402L) cout << "c++14" << endl;
	else if (__cplusplus == 201103L) cout << "c++11"<< endl;
	else if (__cplusplus == 199711L) cout << "c++97" << endl;
	else cout << "damn" << endl; 
}
