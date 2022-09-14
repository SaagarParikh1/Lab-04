// Lab 04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "1. Factorial" << endl;
	cout << "2. Arithmetic Series" << endl;
	cout << "3. Geometric Series" << endl;
	cout << "4. Exit" << endl;
	cout << "\nYour Selection: ";


}
void factorial() {
	cout << "Enter a number: " << endl;
	if (int < 0) {
		cout << "Nice try, please enter a POSITIVE number...: " << endl;
	}

	
	
	
		
	// I recommend writing your factorial code here
}
void arithmetic() {
	cout << "Enter a number to start at:" << endl;
	cin <<
	cout << "Enter a number to add each time: " << endl;
	cin <<
	cout << "Enter the number of elements in the series: " << endl;


	// I recommend writing your arithmetic series code here

}
void geometric() {
	cout << "Enter a number to start at:" << endl;
	cin <<
		cout << "Enter a number to add each time: " << endl;
	cin <<
		cout << "Enter the number of elements in the series: " << endl;

	// I recommend writing your geometric series code here
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}