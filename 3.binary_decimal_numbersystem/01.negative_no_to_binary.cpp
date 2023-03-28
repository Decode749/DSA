#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans = 0 , i = 0, temp = 0;
    if(n < 0)
    {
        temp = -n;
    }
    else{
        temp = n;
    }
    while(temp > 0)
    {
        int bits = temp&1;
        ans = bits*pow(10,i) + ans;
        i++;
        temp = temp >> 1;
    }
    if(n < 0)
    {
        cout<<-ans;
    }
    else{
        cout<<ans;
    }


}