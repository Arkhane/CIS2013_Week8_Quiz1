#include<iostream>
using namespace std;


int findQuarters(int x) {
	return (x / 25);
}

int findDimes(int x) {
	return ((x % 25) / 10);
}

int findNickels(int x) {
	return (((x % 25) % 10) / 5);

}

int findPennies(int x) {
	return (((x % 25) % 10) % 5);

}


int main()
{
	int change = 0;

	cout << "What is your number of Cents?" << endl;
	cin >> change;

	cout << " You will need " << findQuarters(change) << " quarters ";
	cout << " , " << findDimes(change) << " dime ";
	cout << " , " << findNickels(change) << " nickels ";
	cout << " , " << findPennies(change) << " penny ";

	return 0;
}
