#include<iostream>
using namespace std;
int main()
{
    int a[3][4];

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            sum += a[j][i];
        }
        cout<<sum<<" ";
        sum = 0;
    }
}