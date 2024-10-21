#include<iostream>
using namespace std ;
int main(){
    char op ;
    int a,b;
    cin>>op;
    cin>>a;
    cin>>b;
    switch(op)
   { case '+':  
       cout<<(a+b)<<endl;
       break;
    
    case '-':
    cout<<(a-b)<<endl;
    break;
    
    case '*':
    cout<<(a*b)<<endl;
    break;
    
    case '/':
    cout<<(a/b)<<endl;
    break;
    
    default:
    cout<<a<<endl;
    cout<<b<<endl;
   }
   return 0;
}