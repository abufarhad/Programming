#include<bits/stdc++.h>
#include "sieve_header.h"
using namespace std;
int main()
{
    ll m,n,i;
    sieve();
    cin>>m;
    for(i=0;i<=m;i++)cout<<p[i]<<" ";
    cout<<endl<<"mth prime number is "<<p[m]<<endl;
}
