#include<iostream>
using namespace std;

void reverseChar(char name[], int n)
{
    int s = 0 ;
    int e = n-1;
    while(s < e)
    {
        swap(name[s++] , name[e--]);
    }
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
    cout<<name<<endl;
    cout<<getLength(name);
    int n = getLength(name);
    reverseChar(name , n);
    cout<<name;
}