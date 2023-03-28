#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i = 0 ; i < n; i++)
    {
        cin>>a[i];
    }
    int maxi = INT_MIN , mini = INT_MAX;
    for(int i = 0 ; i < n ; i++)
    {
        if(maxi < a[i])
        {
            // max = a[i];
            maxi = max(maxi,a[i]);
        }
        if(mini > a[i])
        {
            // min = a[i];
            mini = min(mini,a[i]);
        }
    }
    cout<<"max : " <<maxi<<" "<<"min : "<<mini<<endl;
}