#include<iostream>
using namespace std;

inline int getMax(int& a , int &b)
{
    return (a>b) ? a : b ;
}
int main()
{
    int a , b;
    cin>>a>>b;

    cout<<getMax(a , b);

    // just before compilation the getMax name will replace by the real condition return init i.e (a>b) ? a : b ;
}