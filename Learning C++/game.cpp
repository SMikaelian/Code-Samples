#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_NUM= 100;
const float MAX_TURN= 0.5;

//function prototype - needed if you put functions under main - only specify data type of variable
//string printWinner(string);

int main()
{
	bool player1Turn= true;
	bool gameOver= false;
	int count1;
	int count2;
	int chipsInPile= 0;
	int chipsTaken= 0;
	int maxTake= 0;
	string playerName[2];
	int choice;
	
	//string playerName[3]= {"JIM", "JACK", "JONES"};
	cout << "Enter name of Player 1: \n";
	cin >> playerName[0];
	
	cout << "Enter name of Player 2: \n";
	cin >> playerName[1];
	
	srand(time(0));
	

	
	do
	{
		chipsInPile= (rand() % MAX_NUM) + 1;
		
		gameOver= false;
		cout << "\nThis round will start with " << chipsInPile << " chips in the pile\n";
		while(gameOver == false)
		{
			do
			{
				maxTake= chipsInPile * MAX_TURN;
				if(player1Turn)
				{
					cout << "\nIt is " << playerName[0] << "'s Turn, how many chips would you like?\n";
				}
				else
				{
					cout << "\nIt is " << playerName[1] << "'s Turn, how many chips would you like?\n";
				}
		
				cout << "You can only take up to ";
				if (maxTake == 0)
				{
					cout << "1\n";
				}
				else
				{
					cout << maxTake << endl;
				}
				cin >> chipsTaken;
				if(player1Turn && chipsTaken < maxTake)
				{
					count1++;
				}
				else if (!player1Turn && chipsTaken < maxTake)
				{
					count2++;
				}
				cout << "Number of chips taken: " << chipsTaken << endl;
				
			} while ((chipsTaken > maxTake) && (chipsInPile > 1));
			
			chipsInPile= chipsInPile - chipsTaken;
			cout << "Number of chips left in the pile: " << chipsInPile << endl;
			
			//If there are still chips
			if(chipsInPile == 0)
			{
				gameOver= true;
				cout << "\nGame Over.";
				if (count1 > count2)
				{
					cout << "\nCongratulations " << playerName[0] << " you won!\n";
				}
				else
				{
					cout << "\nCongratulations " << playerName[1] << " you won!\n";
				}
			}
			//Switching turns
			else
			{
				player1Turn = !player1Turn;
			}
		}
		cout << "Press 1 to play again, otherwise press 0.\n";
		cin >> choice;

	} while (choice == 1);

	//chipsTaken= (rand() % maxTake) + 1;
	return 0;
}

//string printWinner(string& data)
//{
	//return toupper(data);
//}
