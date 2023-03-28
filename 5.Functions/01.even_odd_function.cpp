#include<iostream>
using namespace std;

// bool isEven(int x)
// {
//     if(x%2 == 0)
//     {
//         return true;
//     }
//     return false;
// }
bool isEven(int x)
{
    if(x&1)
    {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    bool ans = isEven(n);
    if(ans)
    {
        cout<<"even number";
    }
    else{
        cout<<"odd number"<<endl;
    }

}