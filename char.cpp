#include<iostream>
using namespace std;
int main(){
 char ch;
 cout<<"enter the value of ch"<<endl;
 cin>>ch;
 if (ch>='a'&&ch<='z'){
    cout <<"character " <<ch<<" :lowercase" <<endl;
 }
 else if(ch>='A'&&ch<='Z'){
    cout<<"character "<<ch<<" 7:uppercase"<<endl;
 }
 else{
    cout<<"not specified ranges"<<endl;
 }
 return 0;
}