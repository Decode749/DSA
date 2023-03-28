#include<iostream>
using namespace std;

int first_occurrence(int a[] , int n , int key)
{
    int s = 0 , e = n-1 , ans = -1;
    int mid = s + ( e - s )/2;

    while(s <= e)
    {
        mid = s + ( e - s )/2;

        if(a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(a[mid] < key)
        {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
int last_occurrence(int a[] , int n , int key)
{
    int s = 0 , e = n - 1 , ans = -1;
    int mid = s + ( e - s )/2;

    while(s <= e)
    {
        mid = s + ( e - s )/2;

        if(a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(a[mid] < key)
        {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}


int main()
{
    int a[6] = { 1 , 2 , 2 , 2 , 3 , 3 };
    cout<<first_occurrence(a , 6 , 2);
    cout<<last_occurrence(a , 6 , 2);

}