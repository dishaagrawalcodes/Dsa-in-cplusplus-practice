#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

int main() {
    int choice;

    // while (true) { // Infinite loop
        cout << "Choose an option (1-3, 4 to exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected option 1." << endl;
                break;
            case 2:
                cout << "You selected option 2." << endl;
                break;
            case 3:
                cout << "You selected option 3." << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                exit(0); // Exits the program entirely
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    return 0; // This will never be reached because of the infinite loop
}
