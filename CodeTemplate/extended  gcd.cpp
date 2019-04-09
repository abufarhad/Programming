#include<bits/stdc++.h>
using  namespace std;
#define ll long long

long long   x,y;

void  extend_Euclid(ll int a,ll int b)
{
    if(b==0)
    {
        x=a;
        y=0;
        //cout<<x<<" "<<y<<endl;
        return ;
    }
    extend_Euclid(b,a%b);

//cout<<"ab "<<a<<" "<<b<<endl;
    ll int x1=y;
    ll int y1=x-(a/b)*y;
    x=x1;

    y=y1;
//cout<<x<<" "<<y<<endl;

}

int main()
{
    long long n,m;

    cin>>n>>m;
    extend_Euclid(n,m);

    cout<<y<<endl;

}



