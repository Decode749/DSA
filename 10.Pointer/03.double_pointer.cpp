#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<i<<endl<<*p<<endl<<**p2<<endl;

    cout<<&i<<endl<<p<<endl<<*p2<<endl;

    cout<<&p<<"  "<<p2<<endl;
}