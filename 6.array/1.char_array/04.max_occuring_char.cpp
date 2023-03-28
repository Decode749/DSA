#include<iostream>
using namespace std;

char max_occ_char(string s)
{
    int a[26] = {0};
    for(int i = 0 ; i < s.length() ; i++)
    {
        char ch = s[i];
        int temp = 0 ;
        temp = ch - 'a';
        a[temp]++;
    }
    int maxi = -1 , ans = 0;
    for(int i = 0 ; i < 26; i++)
    {
        if(maxi < a[i])
        {
            ans = i ;
            maxi = a[i];
        }
    }

    return 'a'+ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<max_occ_char(s);

}