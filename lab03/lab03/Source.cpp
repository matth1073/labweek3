#include <iostream>
#include <string>

using namespace std; 

int main() {

	const double CHILDREN = 10.95;
	const double ADULTS = 19.99;
	const double SENIORS = 18.99;
	const double VIP = 7.99;

	int numChildren;
	int numAdults;
	int numSeniors;
	int numVIP; 

	int personCount; 

	double dailyTotal = 0.00; 
	double weekendTotal = 0.00; 

	char selection = 'x';

	for (int i = 0; i < 3; ++i) {
		cout << "Starting day " << i + 1 << endl;
		numChildren = 0;
		numAdults = 0;
		numSeniors = 0;
		numVIP = 0; 
		personCount = 0;
		dailyTotal = 0.00; 

		while (selection != 'q') {
			cout << "Enter (C)hild, (A)dult, (S)enior, (V)IP or (Q)uit >> ";
			cin >> selection; selection = tolower(selection); cout << endl;
			if (selection == 'q') {
				cout << "Child " << numChildren << " @ 10.95 = " << numChildren * CHILDREN << endl;
				cout << "Adult" << numAdults << " @ 19.99 = " << numAdults * ADULTS << endl;
				cout << "Senior " << numSeniors << " @ 18.99 = " << numSeniors * SENIORS << endl;
				cout << "VIP " << numVIP << " @ 7.99 = " << numVIP * VIP << endl << endl;
				dailyTotal = numChildren * CHILDREN + numAdults * ADULTS + numSeniors * SENIORS + numVIP * VIP;
				cout << "Total = " << dailyTotal << endl << endl;
				weekendTotal += dailyTotal;
				selection = 'x'; 
				break; 
			}
			if (selection == 'c') {
				cout << "How many children? ";
			}
			else if (selection == 'a') {
				cout << "How many adults? ";
			}
			else if (selection == 's') {
				cout << "How many seniors? ";
			}
			else if (selection == 'v') {
				cout << "How many VIPs ";
			}
			else {
				cout << "Invalid selection, please try again" << endl; 
				continue; 
			}
			cin >> personCount; cout << endl; 
			switch (selection) {
				case 'c':
					numChildren += personCount; 
					break;
				case 'a':
					numAdults += personCount; 
					break;
				case 's':
					numSeniors += personCount; 
					break;
				case 'v': 
					numVIP += personCount; 
					break; 
			}
		}
	}
	cout << "The total for the weekend is " << weekendTotal << endl; 
}