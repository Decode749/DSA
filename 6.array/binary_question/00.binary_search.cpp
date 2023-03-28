#include<iostream>
using namespace std;

int binary_search(int a[] , int n , int key)
{
    int i = 0 , j = n-1;
    int mid = i + (j - i)/2;
    while(i <= j)
    {
        mid = i + (j - i)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] < key)
        {
            i++;
        }
        else{
            j--;
        }
    }
    return -1;
}
int main()
{
    int even[6] = { 1 , 2 , 3 , 4 , 5 , 6 };
    int odd[5] = { 7 , 8 , 9 , 10 , 11 };
    cout<<binary_search(even,6,3);
    cout<<endl;
    cout<<binary_search(odd,5,10);
}