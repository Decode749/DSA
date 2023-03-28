#include<iostream>
using namespace std;
int main()
{
    int a[5] = {1 , 2 , 3 , 4 , 5};
    int key = 5;
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = i + 1 ; j < 5 ; j++)
        {
            if(a[i]+a[j] == key )
            {
                cout<<"("<<a[i]<<","<<a[j]<<")"<<" "<<" ";
            }
        }
    }
}