#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    while(i<=n){
        int space=0;
        while(space<=(i-2)){
            cout<<".";
            space++;
        }
            int j=1;
            while(j<=(n-i+1)){
            cout<<'*';
            j++;
            }        
       cout<<endl;
     i++;    
    }
}