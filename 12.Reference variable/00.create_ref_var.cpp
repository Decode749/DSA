#include<iostream>
using namespace std;
int main()
{
    int i = 5;
    int &j = i;
    cout<<i<<"  "<<j<<endl;
    i++;
    cout<<i<<"  "<<j<<endl;
    j++;
    cout<<i<<"  "<<j<<endl;

}