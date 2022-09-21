#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}
void factorial() {
    cout << "Factorial:" << endl;
    int n;
    long factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0)
        cout << "Nice try, please enter a positive number...: ";
    else {
        cout << n << "! = ";
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
            cout << i;
            if (i < n) {
                cout << " * ";
            }
        }
        cout << " = " << factorial << endl;
    }
}
void arithmetic() {
    cout << "Arithmetic Series:" << endl;
    int X, Y, Z;
    int Sum = 0;

    cout << "Enter a number to start with: ";
    cin >> X;

    cout << "Enter a number to add each time: ";
    cin >> Y;

    cout << "Enter the number of elements in the series: ";
    cin >> Z;

    for (Y = 0; Y <= X; Y++) {
        Sum = Sum + Z + 1;
    }

    cout << " = " << Sum << endl;
}

void geometric() {
    cout << "Geometric Series:" << endl;
    int X, Y, Z;
    int Sum = 0;

    cout << "Enter a number to start with: ";
    cin >> X;

    cout << "Enter a number to multiply each time: ";
    cin >> Y;

    cout << "Enter the number of elements in the series: ";
    cin >> Z;

    for (Y = 0; Y <= X; Y++) {
        Sum = Sum * Z + 1;
    }

    cout << " = " << Sum << endl;


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

