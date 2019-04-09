#include<bits/stdc++.h>
using namespace std;

int gdc( int m,int n)
{
    if(m>n){
    if(m%n==0) return n;
    return (n,m%n);
    }
    else
    if(n%m==0) return m;
    return (m,n%m);
}

//int gdc();
int lcm(int m,int n)
{
return (m*n)/gdc(m,n);

}


int main( )
{
    int i,j,m,n;
    cin>>m>>n;
    gdc(m,n);
    cout<<"GDC is = "<<gdc(m,n)<<endl;
    cout<<"LCM is = "<<lcm(m,n)<<endl;
}

