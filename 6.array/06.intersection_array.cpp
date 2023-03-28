#include<iostream>
using namespace std;
int main()
{
    int a[4] = {1 , 2 , 2 , 3};
    int b[4] = {2 , 3 , 5 , 6};
    int i = 0 , j = 0 ;
    while( i<4 && j<4 )
    {
        if(a[i] < b[j])
        {
            i++;
        }
        if(a[i] == b[j])
        {
            cout<<a[i]<<" ";
        i++;
        j++;
        }
        if(a[i]>b[j])
        {
            j++;
        }
    }

}