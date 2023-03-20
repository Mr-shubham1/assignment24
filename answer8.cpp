#include<iostream>
using namespace std;
#include<math.h>

float area(int r)
{
    return 3.14*r*r;
}
float area(int l,int b)
{
    return l*b;
}
float area(int a,int b,int c)
{
    float s;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}





int main()
{
    cout<<"choice 1: area of circle\n";
    cout<<"choice 2: area of rectangle\n";
    cout<<"choice 3: area of triangle\n";
    int choice;
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            int r;
            cout<<"enter radious of circle: ";
            cin>>r;
            cout<<"area of circle is "<<area(r);
            break;
        }
        case 2:
        {
            int l,b;
            cout<<"enter length and breadth of rectangle: ";
            cin>>l>>b;
            cout<<"area of rectangle is "<<area(l,b);
            break;
        }
        case 3:
        {
            int a,b,c;
            cout<<"enter three sides of triangle ";
            cin>>a>>b>>c;
            cout<<"area of triangle is "<<area(a,b,c);
            break;
        }
        default :
        {
            cout<<"invalid index";
        }
    }



    return 0;
}