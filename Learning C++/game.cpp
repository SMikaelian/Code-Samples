#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_NUM= 100;
const float MAX_TURN= 0.3;

int main()
{
	bool player1Turn= true;
	bool gameOver= false;
	
	int chipsInPile= 0;
	int chipsTaken= 0;
	int maxTake= 0;
	string playerName[2];
	
	//string playerName[3]= {"JIM", "JACK", "JONES"};
	cout << "Enter name of Player 1: \n";
	cin >> playerName[0];
	
	cout << "Enter name of Player 2: \n";
	cin >> playerName[1];
	
	srand(time(0));
	
	chipsInPile= (rand() % MAX_NUM) + 1;
	maxTake= chipsInPile * MAX_TURN;
	cout << "This round will start with " << chipsInPile << " chips in the pile\n";
	
	if(player1Turn)
	{
		cout << "It is " << playerName[0] << "'s Turn, how many chips would you like?\n";
	}
	else
	{
		cout << "It is " << playerName[1] << "'s Turn, how many chips would you like?\n";
	}
	
	cout << "You can only take " << maxTake << endl;
	cin >> chipsTaken;
	
	//chipsTaken= (rand() % maxTake) + 1;
	cout << "Number of chips taken: " << chipsTaken << endl;
	
	return 0;
}
