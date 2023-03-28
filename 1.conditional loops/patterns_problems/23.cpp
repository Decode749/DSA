// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while( j <= (n-i+1))
        {
            cout<<j;
            j++;
        }
        int star1 = i - 1;
        while(star1)
        {
            cout<<"*";
            star1--;
        }
        int star2 = i - 1;
        while(star2)
        {
            cout<<"*";
            star2--;
        }
        j = 1;
        while( j <= n-i+1)
        {
            cout<<(n-j-i+2);
            j++;
        }
        i++;
        cout<<endl;
        
    }
}