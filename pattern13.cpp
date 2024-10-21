#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            char c=('A'+n-i+j-1);
            cout<<c<<" ";
            j=j+1;
        }
                cout<<endl;
            i++;
            
        
    }
}