#include<iostream>
using namespace std;
int main()
{
    char ch = 'a';
    cout<<endl;
    switch ( ch )
    {
        case 'a': cout<<" got the character first"<<endl;
        break;

        case '2': cout<<"got the character second"<<endl;
        break;

        default: cout<<" i am in defualt case now "<<endl;
    }
    cout<<endl;
}