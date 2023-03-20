#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int x,y;
    cout<<"enter two number:\n";
    cin>>x>>y;
    swap(x,y);
    cout<<"after swapinng\n"<<x<<" "<<y;
    return 0;
}