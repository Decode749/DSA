#include<iostream>
using namespace std;
int i = 5;

void a()
{
    cout<<i<<endl;
    i++;
}

void b()
{
    cout<<i<<endl;
}
int main()
{
    cout<<i<<endl;
    a();
    b();
    
}