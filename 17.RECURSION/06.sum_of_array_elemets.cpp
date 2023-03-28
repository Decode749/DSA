#include<iostream>
using namespace std;

int Sum(int *arr , int size , int ans)
{
    if(size == 0)
    {
        return ans;
    }
    ans += arr[0];

    return Sum(arr + 1 , size - 1 , ans);

}
int main()
{
    int arr[5] = { 10 , 20 , 30 , 40 , 50};
    int size = 5;
    int ans = 0;
    cout<<Sum(arr,size,ans);
    
}