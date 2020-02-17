#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,i,j,k;
    cin>>n;
    ll a[n];

    fr(i, n) cin>>a[i];

    ll cnt=0, cn=0, pos=-1, pos1=-1;
    fr1(i, n-1)if( a[i-1]<a[i] )pos=i-1;else break;

    for(i=n-1; i>0; i--) if( a[i] <a[i-1] )pos1=i-1;else break;




    }

}
