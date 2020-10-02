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
int main( )
{
    int i,j,m,n;
    cin>>m>>n;
    gdc(m,n);
    cout<<gdc(m,n)<<endl;
}
