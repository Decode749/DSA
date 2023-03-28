#include<iostream>
using namespace std;

int peak_element(int a[] , int n)
{
    int s = 0 , e = n - 1;
        int mid = s + ( e - s )/2;
        while(s < e)
        {
            mid = s + ( e - s )/2;

            if(a[mid] < a[mid + 1])
            {
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return s;
}
int main()
{
    int a[5] = { 1 , 2 , 3 , 4 , 3};
    cout<<peak_element(a,5);
}