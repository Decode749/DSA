#include<iostream>
using namespace std;

void selection_sort(int a[] , int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = i + 1 ; j < n ; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i] , a[j]);
            }
        }
    }
}
int main()
{
    int a[6] = { 9 , 23 , 42 , 90 , 1 , 222 };
    selection_sort(a,6);
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<a[i]<<" ";
    }
}