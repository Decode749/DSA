#include<iostream>
using namespace std;

void reverse_array(int a[] , int n)
{
    int i = 0 , j = n - 1;
    while(i <= j)
    {
        swap(a[i] , a[j]);
        i++;
        j--;
    }
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }
    reverse_array(a,n);
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }


}