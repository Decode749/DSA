// 1
// 21
// 321
// 4321
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 0;
    // while(i <= n)
    // {
    //     int j = 1;
    //     int sum = i;
    //     while(j <= i)
    //     {
    //         cout<<sum;
    //         sum--;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // without using int sum = i

    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout<<(i-j+1);
            j++;
        }
        cout<<endl;
        i++;
    }
}