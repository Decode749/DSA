#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch <= 'z' && ch >= 'a')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char name[] , int n)
{
    int s = 0 , e = n - 1;
    while(s < e)
    {
        if(toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int getLength(char name[])
{
    int count = 0;
    for(int i = 0 ; name[i] != '\0' ; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin>>name;
    int n = getLength(name);
    if(checkPalindrome(name,n))
    {
        cout<<"its palindrome";
    }
    else{
        cout<<"its not palindrome";
    }
    cout<<endl;
    cout<<toLowerCase('B');
    cout<<toLowerCase('b');
}