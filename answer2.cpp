#include<iostream>
using namespace std;
int hdgt(int n)
{
    int x=0;
    while(n!=0)
    {
        if(n%10>x)
        x=n%10;
        n=n/10;
    }
    return x;
}
int main()
{
    int a;
    cout<<"enter a number:\n";
    cin>>a;
    cout<<"hieghest digit in "<<a<<" is "<<hdgt(a)<<endl;
    return 0;
}