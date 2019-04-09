#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define scl(x) scanf("%lld",&x)
#define ll long long

int main()
{
    ll a,b,m,n,i;
    cin>>a>>b;

    ll x=a, y=b;

    if(a%2==0) a++;
    if(b%2==0) b--;

    if(x%2==1) x++;
    if(y%2==1) y--;

    ll odd_num=(b-a)/2 +1;
    ll even_num=(y-x)/2+1;

    //cout<<odd_num<<" "<<even_num<<endl;

    ll odd= (odd_num*(2*a +(odd_num-1)*2 ))/2;        ///formula (n*(2*a +(n-1)*2 ))/2;   a=initial num
    ll even =(even_num*(2*x +(even_num-1)*2 ))/2;

    ll ans= even-odd;

    cout<<abs(ans)<<endl;
}
