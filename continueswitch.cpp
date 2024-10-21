#include <iostream>
using namespace std;

int main() {
    int choice;

    
        cout << "Choose an option (1-3, 4 to exit): ";
        cin >> choice;

      switch (choice) {
    case 1:
        cout << "Option A" << endl;
        continue; // This will cause a compiler error
    case 2:
        cout << "Option B" << endl;
        break;
    default:
        cout << "Invalid option" << endl;
}       
    return 0; // This will never be reached because of the infinite loop
}
