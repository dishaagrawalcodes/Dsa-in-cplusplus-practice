#include<iostream>
using namespace std;
int main(){
    int i=2,n,sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n){
        cout<<i<<endl;
        sum=sum+i;
        i=i+2;
    }
      cout<<sum<<endl;
 return 0;
}