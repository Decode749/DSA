#include<iostream>
using namespace std;

void insertion_sort(int a[] , int n)
{
    int j = 0;
    for(int i = 0 ; i < n; i++)
    {
        int temp = a[i];
        for(j = i - 1 ; j >= 0 ; j--)
        {
            if(a[j] > temp)
            {
                a[j+1] = a[j];
            }
            else{
                break;
            }
        }
        a[j+1] = temp;
    }
}
int main()
{
    int a[6] = { 2 , 67 , 23 , 97, 3 , 0 };
    insertion_sort(a,6);
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<a[i]<<" ";
    }


}