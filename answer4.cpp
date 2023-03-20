#include<iostream>
using namespace std;
int fact(int f)
{
    int p=1;
    for(int i=1;i<=f;i++)
    {
        p=p*i;
    }
    return p;
}
int C(int n,int r)
{
    int ans=fact(n)/(fact(n-r)*fact(r));
    return ans;
}
void printpascal(int n)
{
    if(n%2==1)
    {
        int i,j;
        for(int i=1;i<=n;i++)
        {
        int x=0;
        for(int j=1;j<=2*n-1;j++)
        {
           if((j>=n+1-i)&&(j<=n-1+i)&&(j%2==1)&&(i%2==1))
           {
            cout<<C(i-1,x);
            x++;
           }
           else if((j>=n+1-i)&&(j<=n-1+i)&&(j%2==0)&&(i%2==0))
           {
            cout<<C(i-1,x);
            x++;
           }
           else
           cout<<" "; 
        }
        cout<<endl;
        }
    }
    if(n%2==0)
        {
        int i,j;
        for(int i=1;i<=n;i++)
        {
        int x=0;
        for(int j=1;j<=2*n-1;j++)
        {
           if((j>=n+1-i)&&(j<=n-1+i)&&(j%2==1)&&(i%2==0))
           {
            cout<<C(i-1,x);
            x++;
           }
           else if((j>=n+1-i)&&(j<=n-1+i)&&(j%2==0)&&(i%2==1))
           {
            cout<<C(i-1,x);
            x++;
           }
           else
           cout<<" "; 
        }
        cout<<endl;
    }
    
}
}


int main()
{
    int a;
    cout<<"enter a number:\n";
    cin>>a;
    printpascal(a);
    return 0;
}