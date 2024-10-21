#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,l;
    cin>>n;
     if(n<=10000)
     {
        switch(n){
     case(n>=1000){
     for(i=0;n>=1000;i++){
       i=n/1000;
       n=n-i*1000;
     }
     cout<<i<<"1000 rupee note is required"<<endl};
     case(n>=100){
     for(j=0;n>=100;j++){
        j=n/100;
        n=n-j*100;
     }cout<<j<<"100 rupee note is required"<<endl;
     }
     case(n>=10){
     for(k=0;n>=10;k++){
        k=n/10;
        n=n-k*10;
     }cout<<k<<"10 rupee note is required"<<endl;
     }
     case(n>=0){
     for( l=0;n>=10;l++){
        l=n/10;
        n=n-l*10;
     }cout<<l<<"10 rupee note is required"<<endl;
     }    
     default:(cout<<"invalid input"<<endl);
}
     return 0;
     }}
     #include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the total amount (in rupees): ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid input. Please enter a positive amount." << endl;
        return 1;
    }

    // Calculate number of 100 rupee notes
    int count100 = amount / 100;
    amount -= count100 * 100;

    // Calculate number of 50 rupee notes
    int count50 = amount / 50;
    amount -= count50 * 50;

    // Calculate number of 20 rupee notes
    int count20 = amount / 20;
    amount -= count20 * 20;

    // Remaining amount will be the number of 1 rupee notes
    int count1 = amount;

    // Output results using switch statements
    switch (count100) {
        case 0:
            break; // No 100 rupee notes
        default:
            cout << count100 << " 100 rupee note(s) required" << endl;
            break;
    }

    switch (count50) {
        case 0:
            break; // No 50 rupee notes
        default:
            cout << count50 << " 50 rupee note(s) required" << endl;
            break;
    }

    switch (count20) {
        case 0:
            break; // No 20 rupee notes
        default:
            cout << count20 << " 20 rupee note(s) required" << endl;
            break;
    }

    switch (count1) {
        case 0:
            break; // No 1 rupee notes
        default:
            cout << count1 << " 1 rupee note(s) required" << endl;
            break;
    }

    return 0;
}
