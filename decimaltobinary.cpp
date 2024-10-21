// #include<iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n,digit;
//     cin>>n;
//     int i =0;
//     int answer =0;
//     while(n!=0){
//         if(n&1){
//           digit =1;
//         }
//         else{
//             digit =0;
//         }
//         answer =digit*pow(10,i)+answer;
//         i++;
//         n =n>>1;
//     }cout<<answer;
// }



#include<iostream>
using namespace std;

int main() {
    int n, digit;
    cin >> n;
    
    int answer = 0;
    int place = 1; // To keep track of the current place value (1, 10, 100, ...)
    
    while (n != 0) {
        digit = n & 1; // Get the least significant bit
        answer = digit * place + answer; // Place the digit at the correct position
        place *= 10; // Move to the next place
        n = n >> 1; // Right shift n to process the next bit
    }
    
    cout << answer; // Print the final binary representation
}


