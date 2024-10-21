#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Skip the rest of the loop for i == 3
        }
        cout << i << endl; // This line will be skipped when i is 3
    }
    return 0;
}
