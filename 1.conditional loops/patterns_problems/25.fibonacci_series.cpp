#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int a = 0 , b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 0 ; i < n ; i++)
    {
        int next_number = a + b;
        cout<<next_number<<" ";
        a = b;
        b = next_number;
    }
}