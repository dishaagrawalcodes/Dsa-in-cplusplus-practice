#include<iostream>
using namespace std;
void binary(int n, int bits){
    if (n<0){
        n=(1ll<<bits)+n;
}
   for(int i=bits-1;i>=0;--i){
    cout<<((n>>i)&1);
   }
}
int  main(){
    int n,ans,bits=16;
    cin>>n;
    binary(-6,16);
    return 0;
}