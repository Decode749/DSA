// AAAA
// BBBB
// CCCC
// DDDD
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    // char sum = 65;
    // while(i <= n)
    // {
    //     int j = 1;
    //     while(j <= n)
    //     {
    //         cout<<sum;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    //     sum++;
    // }

    // without using char sum = 65

    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            char ch = 'A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
}