#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;
    do {
        // Prompt the user to enter a number
        cout << "Enter an integer: ";
        cin >> number;

        // Check if the number is even or odd
        if (number % 2 == 0) {
            cout << number << " is an even number." << endl;
        } else {
            cout << number << " is an odd number." << endl;
        }

        // Ask the user if they want to check another number
        cout << "\nDo you want to check another number? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y'); 

    cout << "Thank you for using the program!" << endl;
    
    return 0;
}
