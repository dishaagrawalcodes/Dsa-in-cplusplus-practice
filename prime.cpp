#include<iostream>
using namespace std;
int main(){
 int i,n;
 cout<<"enter the value of n";
 cin>>n;
 bool isprime=1;
 for(i=2;i<n;i++){
  if (n%i ==0){
   isprime =0;
   break;
  }}
  if(isprime==0){
   cout<<n<<" is not a prime number";
  }
  else{
    cout<<n<<" is a prime number";
  }
 } 
 
