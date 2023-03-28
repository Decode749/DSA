#include<iostream>
using namespace std;

// int printArray(int a[] , int n)
// {
//     for(int i = 0 ; i < n ; i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

int duplicate_element(int a[] , int n)
{
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        ans = ans^a[i];
    }
    for(int i = 1 ; i < n ; i++)
    {
        ans = ans^i;
    }
    return ans;
}

int main()
{
    int a[7] = {1 , 2 , 3 , 4 , 4, 6 , 5};
    cout<<duplicate_element(a,5);
}