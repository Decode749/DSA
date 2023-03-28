#include<iostream>
using namespace std;

int nth_term(int n)
{
    int ans = 3*n + 7;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<nth_term(n);
}