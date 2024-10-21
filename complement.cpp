#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans =0;
    int i =0;
    int digit;
    while(n!=0){
       if(n&1){
        digit =1;
       }
       else{
        digit =0;
       }
       ans =digit*pow(10,i)+ans;
       i++;
       n=n>>1;
    }
    cout<<ans<<endl;
    int ans1 =~(-ans);
    cout<<ans1;
}