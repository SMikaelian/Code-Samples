#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

const float TAX_RATE = 0.09;

int main()
{
	string name;
	float price= 4.44;
	int qty= 0;
	float charge= 0;
	float taxCharge= 0;
	
	cout << "Enter the number of items you wish to order: \n";
	cin >> qty;
	
	//format output
	cout.setf(ios::fixed); //not show e notation
	cout.setf(ios::showpoint); //show decimal point even if not necessary
	
	charge = qty * price;
	taxCharge= charge * TAX_RATE;
	cout << "TAX: $" << setprecision(2) << taxCharge << endl;
	charge = taxCharge + charge;
	
	cout << "Total Charges: $" << setprecision(2) << charge << endl;
}
