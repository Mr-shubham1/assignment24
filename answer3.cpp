#include<iostream>
using namespace std;
int power(int a,int b)
{
    int product=1;
    for(int i=1;i<=b;i++)
    {
        product=product*a;
    }
    return product;
}


int main()
{
    int a,b;
    cout<<"enter two number:\n";
    cin>>a>>b;
    cout<<a<<" to power "<<b<<" = "<<power(a,b);
    return 0;
}