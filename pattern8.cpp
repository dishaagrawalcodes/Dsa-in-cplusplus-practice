


#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
      int count=0;
    while(i<=n){
        int j=1;
        while(j<=n){
            char c=('A'+count);
            cout<<c<<" ";
            j=j+1;
            count++;
        }
        cout<<endl;
            i++;
    }
}