#include<iostream>
using namespace std;

bool find_key(int a[][4] , int key , int i  , int j)
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            if(key == a[i][j])
            return true;
        }
    }
    return false;
}
int main()
{
    int a[3][4];
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            cin>>a[i][j];
        }
    }
    int key ;
    cin>>key;

    if(find_key(a,key,3,4))
    {
        cout<<"found";
    }
    else{
        cout<<" not found";
    }
}