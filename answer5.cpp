#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }

}
int isbelongtofibo(int x)
{
    int n=1;
    while(x>=fibo(n))
    {
        if(x==fibo(n))
        return 1;
        n++;
    }
    return 0;

}



int main()
{
    int a;
    cout<<"enter a number:\n";
    cin>>a;
    if(isbelongtofibo(a)==1)
    cout<<a<<" belong to fibonacy series";
    else
    cout<<a<<" does not belong to fibonacy series";
    return 0;

}