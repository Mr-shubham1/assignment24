#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}



int main()
{
    int x,y,z;
    cout<<"enter two number:\n";
    cin>>x>>y;
    cout<<"sum of two number is "<<add(x,y)<,endl;
    cout<<"enter three number:\n";
    cin>>x>>y>>z;
    cout<<"sum of three number is "<<add(x,y,z);

return 0;
}