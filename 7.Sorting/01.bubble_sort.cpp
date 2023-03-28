#include<iostream>

using namespace std;

void bubble_sort(int a[] , int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        bool swapped = false;

        for(int j = 0 ; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                swapped = true;
                swap(a[j] , a[j+1]);
            }
        }
        if(swapped == false)
        break;
    }
}
int main()
{
    int a[6] = { 6 , 23 , 87 , 14 , 4 , 0 };

    bubble_sort(a,6);
    
    for(int i = 0 ; i < 6 ; i++)
    {
        cout<<a[i]<<" ";
    }

}