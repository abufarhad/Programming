#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define scl(x) scanf("%lld",&x)
#define ll long long

int main()
{
    ll a,b,m,n,i;
    cin>>a>>b;

    if(a%2==0) a++;
    if(b%2==0) b--;

    n=(b-a)/2 +1;

    ll ans= (n*(2*a +(n-1)*2 ))/2;
    cout<<ans<<endl;
}
