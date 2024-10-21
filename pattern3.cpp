#include<iostream>
using namespace std;
int main(){
    int i=1,n,n1,count=1;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter the value of n1";
    cin>>n1;
    while(i<=n){
int j=1;
while(j<=n1){
    cout<<count<<" ";
    count=count+1;
    j=j+1;
}
cout<<endl;
i=i+1;
    }
}