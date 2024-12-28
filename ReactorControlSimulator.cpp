#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    char arr[SIZE] = {'+', '+', '+', '+', '+', '+', '+', '+', '+', '+'};

    bool isRunning = true;
    cout << "Welcome to Reactor Switch Program! \n \n \n";

    while (isRunning) {
        int index;
        cout << "Enter the reactor number to change status (1-10): ";
        cin >> index;
        cout << endl;

        // Validate index input
        if (index < 1 || index > 10) {
            cout << "Invalid reactor number! Please enter a number between 1 and 10.\n";
            continue;  // Skip the rest of the loop and prompt again
        }

        int status;
        cout << "Press 0 to turn off, or 1 to turn on the reactor number " << index << ": ";
        cin >> status;
        cout << endl;

        if (status == 0) {
            arr[index - 1] = '-';
        } else if (status == 1) {
            arr[index - 1] = '+';
        } else {
            cout << "Invalid status input! Reactor can only be turned on (1) or off (0).\n";
            continue;  // Skip the rest of the loop and prompt again
        }

        char allReactorCheck;
        cout << "Press y to see the status of all reactors: ";
        cin >> allReactorCheck;
        if (allReactorCheck == 'y' || allReactorCheck == 'Y') {
            for (int i = 0; i < SIZE; i++) {
                cout << "Reactor " << i + 1 << " has status " << arr[i] << "\n";
            }
        }

        char exit;
        cout << "To exit the program, press 'q', to continue, press 'y': ";
        cin >> exit;
        if (exit == 'q' || exit == 'Q') {
            isRunning = false;
        } else if (exit == 'y' || exit == 'Y') {
            isRunning = true;
        } else {
            cout << "Invalid input! Exiting program.\n";
            break;  // Exit the loop
        }
    }

    return 0;
}
