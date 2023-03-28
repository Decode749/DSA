#include<iostream>
using namespace std;

void swap_alternate(int a[] , int n)
{
    for(int i = 0 ; i < n ; i+=2)
    {
        if(i+1 < n)
        {
            swap(a[i],a[i+1]);
        }
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
    swap_alternate(a,n);
     for(int i = 0 ; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }

}