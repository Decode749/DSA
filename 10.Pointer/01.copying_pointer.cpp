#include<iostream>
using namespace std;
int main()
{
    int num = 4;
    int *p = &num;
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<(*p)<<" - "<<(*q)<<endl;
}