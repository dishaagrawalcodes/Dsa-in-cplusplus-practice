#include <iostream>
using namespace std;

void printBinary(int n, int bits) 
// The keyword void is used when the function is not intended to return a value. Instead, it performs an action (like printing output) and exits.
{
    // If the number is negative, convert to two's complement
    if (n < 0) {
        n = (1LL << bits) + n; // Use bit shifting to get the positive equivalent
        // (1LL << bits) computes 2^bits
    }

    // Print the binary representation
    for (int i = bits - 1; i >= 0; --i) {
        cout << ((n >> i) & 1); // Shift and mask to get each bit
    }
    cout << endl;
}

int main() {
    int n;
    cin>>n;
    int bits = 16; // Change this for different bit widths

    cout << "Binary representation of " << n << " is: ";
    printBinary(n, bits);

    return 0;
}
