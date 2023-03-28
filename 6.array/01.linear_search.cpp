#include<iostream>
using namespace std;

bool linear_search(int a[] , int n , int key)
{
    for(int i = 0 ; i < 10 ; i++)
    {
        if( key == a[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int a[10] = {10, -12 , 8 , -23 , 4 , 1 , 99, 0 , 274 , -100};
    int key = 88;
    bool ans = linear_search(a , 10 , key);
    if(ans)
    {
        cout<<" haan bhai present hain ";
    }
    else
    {
        cout<<"nahi hain chutiye ";
    }

    
}