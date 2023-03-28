#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, ans = 0, i = 0;
    cin>>n;
    // while(n > 0)
    // {
    //     int digit = n%10;
    //     ans = digit*pow(2,i) + ans;
    //     i++;
    //     n /= 10;
    // }
    // cout<<ans;

    // babbar logic 

    while (n > 0)
    {
        int digits = n%10;
        if(digits == 1)
        {
            ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
    }
    cout<<ans;
    
}