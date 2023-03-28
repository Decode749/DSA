#include<iostream>
using namespace std;
int main()
{
    int a[8] = { 0 , 1 , 1 , 0 , 1, 0 , 1 , 1 };
    int i = 0 , j = 7 ;
    while(i < j)
    {
        while(a[i] == 0)
        {
            i++;
        }
        while(a[j] == 1)
        {
            j--;
        }
        swap(a[i],a[j]);
            i++;
            j--;
    }

    for(int i = 0 ; i < 8 ; i++)
    {
        cout<<a[i]<<" ";
    }

}