#include<iostream>
using namespace std;

int fibo(int n)
{
    int a = 0 , b = 1;
    int ans = 0;
    for(int i = 2 ; i <= n ; i++)
    {
        ans = a + b;
        a = b;
        b = ans;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);

}