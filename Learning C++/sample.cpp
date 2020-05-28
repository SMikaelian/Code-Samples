//Sample program
//bool isValid= TRUE;
//casting - cout << static_cast<int>(numB * 4);

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_NUM= 100;

int main()
{
	string name;
	int dice= 0;
	
	cout << "Please enter your name:" << endl;
	cin >> name;
	
	srand(time(0));
	dice= (rand()%6) + 1; //adding 1 to get a random number between 1-6
	

	
	cout << "Hello, " << name << " you rolled a "<< dice << endl;
	
	switch(dice)
	{
		case 1:
			cout << "One.\n";
			break;
		case 2:
			cout << "Two.\n";
			break;
		case 3:
			cout << "Three.\n";
			break;
		case 4:
			cout << "Four.\n";
			break;
		case 5:
			cout << "Five.\n";
			break;
		case 6:
			cout << "Six.\n";
			break;
		default:
			cout << "Invalid.\n";
			break;
	}
	
	
	return 0;
}
