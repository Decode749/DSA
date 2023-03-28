#include<iostream>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int *p = new int;
    *p = 90;
    cout<<*p<<endl;

    // creating variable size array using heap
    
    int n ;
    cin>>n;
    int *arr = new int[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    cout<<getSum(arr , n);


}