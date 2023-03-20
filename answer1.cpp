#include<iostream>
using namespace std;
int isprime(int n)
{
    int i;
    for( i=2;i<=n-1;i++)
    {
        if(n%i==0)
        return 0;
    }
    if(i==n)
    return 1;
}
int main()
{
    int a;
    cout<<"enter a number:\n";
    cin>>a;
    if(isprime(a)==1)
    cout<<a<<" is prime number:\n";
    else
    cout<<a<<" is not prime number:\n";
    return 0;
}