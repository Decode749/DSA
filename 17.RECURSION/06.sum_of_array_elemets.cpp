#include<iostream>
using namespace std;

// int Sum(int *arr , int size , int ans)
// {
//     if(size == 0)
//     {
//         return ans;
//     }
//     ans += arr[0];

//     return Sum(arr + 1 , size - 1 , ans);

// }
// int main()
// {
//     int arr[5] = { 10 , 20 , 30 , 40 , 50};
//     int size = 5;
//     int ans = 0;
//     cout<<Sum(arr,size,ans);
    
// }

// by babbar way 

int getSum(int arr[] , int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    int sum = arr[0] + getSum(arr + 1 , size - 1);
    return sum;
}

int main()
{
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    int size = 5;
    cout<<getSum(arr,size);
}