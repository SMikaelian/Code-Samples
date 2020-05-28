#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


const string masterPass= "123456789";

int main()
{
	string userPass;
	do
	{
		cout << "Enter your password:" << endl;
		cin >> userPass;
		
	} while(userPass != masterPass);	
}
