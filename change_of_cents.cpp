#include<iostream>
using namespace std;

int main()
{
	int amount = 0;
	int totle = 0;

	cout << "What is your number of Cents?" << endl;
	cin >> amount;

	totle = amount / 25;

	cout << " You will need " << totle << " quarters ";

	totle = amount / 10;
	totle = amount % 10;
	

	cout << " , " << totle  << " dime ";

	totle = amount / 5;
	totle = amount % 5;

	cout << " , " << totle  << " nickels ";
	
	totle = amount / 1;
	totle = amount % 1;

	cout << " , " << totle  << " penny ";
	

	return 0;
}













