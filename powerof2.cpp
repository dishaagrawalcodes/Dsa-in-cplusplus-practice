#include<iostream>
#include<math.h>
using namespace std;
 bool powerof2(int n){
    for(int x=0;n>=(pow(2,x));x++){
        if(n==(pow(2,x))){
            return true;
        }
        }return false;
        
    }
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int x=0;
    bool result = powerof2(n);
    
    // Output the result
    cout << boolalpha << result << endl;
    return 0;
    
}