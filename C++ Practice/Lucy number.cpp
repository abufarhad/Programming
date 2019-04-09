#include<iostream>

using namespace std;

int main()
{
    int n,n1,f=0;
    int i=0,t=0,a[1000],c=0;
    cin>>n;
    n1=n;
    while(n1!=0)
    {
        t=n1%10;
        a[i]=t;
        n1=n1/10;
        i++;
        c=i;
    }
    for(i=0;i<c;i++)
    {
        if(a[i]==4||a[i]==7)
            f=0;
        else
        {
            f=1; break;
        }
    }
    if(f==0)
        cout<<"YES";
    else
    {
        if(n%4==0||n%7==0||n%47==0||n%744==0)
            cout<< "YES";
        else
            cout<<"NO";
    }


    return 0;
}
