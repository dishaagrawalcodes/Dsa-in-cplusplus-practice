#include<iostream>
using namespace std;
int main(){
    int i,n;
    i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
            cout<<value<<" ";
            j=j+1;
            value++;
            }
            cout<<endl;
            i=i+1;
    }
}
// or we can do the same by giving cout<<(i+j-1)