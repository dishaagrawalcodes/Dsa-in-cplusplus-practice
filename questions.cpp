#include<iostream>
using namespace std;
// int main(){
//     for(int i =0;i<=5;i++){
//         for(int j=i;j<=5;j++){
//             if(i+j ==10){
//                 break;
//             }
//         }
//             cout<<i<<" "<<j <<endl;
//     }
// }
// Scope of j: The variable j is declared inside the inner loop, so it is not accessible outside of that loop. When you try to use j in the cout statement, it results in a compilation error
// int main(){
//     for(int i =0;i<=15;i+=2){
//     cout<<i << " ";
//         if (i&1){
//             continue;
//         }
//     i++;
//     }
// }
// continue will skip statement at 3 will directly increase 2 in it not 1 then 2 

// question3
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,product=1,diff;
    cin>>n;
    while(n!=0){
        int digit =n%10;
        product =product*digit;
        sum =sum +digit;
        n=n/10;
    }
    diff =product-sum;
    cout<<diff<<endl;
}