#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,nextnum,n=10;
    cout<<a<<" "<<b<<" ";
    for(int i =1;i<n;i++){
        int nextnum =a+b;
        cout<<nextnum<<" ";
        a=b;
        b=nextnum;
    }
}