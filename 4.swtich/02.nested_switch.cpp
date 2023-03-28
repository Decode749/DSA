#include<iostream>
using namespace std;
int main()
{
    int num = 1;
    char ch = 'a';
    cout<<endl;
    switch( ch )
    {
        case '1': cout<<" character one "<<endl;
        break;

        case 'a': switch( num )
        {
            case 1: cout<<" interger one executed"<<endl;
            break;
        }
        break;
        
        default: cout<<" nothing is there default"<<endl;
    }
     cout<<endl;
}