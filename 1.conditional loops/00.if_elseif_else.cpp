#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout<<" UpperCase letters";
    }
    else if( ch >= 'a' && ch <= 'z'){
        cout<<" LowerCase letters ";
    }
    else if( ch >= '0' && ch <= '9'){
        cout<<"numeric number";
    }

}