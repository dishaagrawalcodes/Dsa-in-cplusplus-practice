#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    int ans = 0, digit;

    while (n != 0) {
        digit = n % 10;
        if (digit ==1) { // Issue here
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;

    return 0;
}
