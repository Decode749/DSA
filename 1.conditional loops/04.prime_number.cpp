#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    // int i = 2 ;
    // while(i < n){
    //     if(n%i == 0){
    //         cout<<"Not prime for : "<<i<<endl;
    //     }
    //     else{
    //         cout<<"prime for : "<<i<<endl;
    //     }
    //     i++;
    // }

    int isPrime = 1;
    for(int i = 2 ; i < n; i++)
    {
        if(n%i == 0)
        {
            // cout<<"number is not prime";
            isPrime = 0;
            break;
        }
    }
    if(isPrime)
    {
        cout<<" prime number ";
    }
    else{
        cout<<" not prime number ";
    }
}