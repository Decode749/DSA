#include<iostream>
using namespace std;

int unique_element(int a[] , int n)
{
    int ans = 0;
    for(int i = 0 ; i < n; i++)
    {
        ans = ans^a[i];
    }
    return ans;
}

int main()
{
    int a[7] = {1 , 2 , 3 , 4 , 2 , 1 , 3};
    cout<<unique_element(a , 7);
}