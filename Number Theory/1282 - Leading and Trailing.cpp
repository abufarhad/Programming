#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";
#define md 1000

/*
The last three digits can be obtained directly by taking the remainder of the fast power.
For the first three digits, we can convert n ^ k to a.bc * 10 ^ m, so that abc is the first three digits, n ^ k = a.bc * 10 ^ m

Lg (n ^ k) = lg (a.bc * 10 ^ m)

<==> k * lg (n) = lg (a.bc) + lg (10 ^ m) = lg (a.bc) + m

m is the integer part of k * lg (n), and lg (a.bc) is the decimal part of k * lg (n)

x = lg (a.bc) = k * lg (n)-m = k * lg (n)-(int) (k * lg (n))

a.bc = pow (10, x);

abc = a.bc * 100;

In this way, the first three digits abc can be found
*/

ll bigmod(ll b, ll p)
{
    if(p==0)  return 1;
    if(p%2==1)  return ((b%md)*bigmod(b,p-1))%md;
    else
    {
        ll y=bigmod(b,p/2);
        return (y*y)%md;
    }
}



ll solve_last_3_digit(ll a, ll b)
{
    ll res=1;
    a%=md;
    while(b)
    {
        if(b & 1) res= (res*a) %md;
        a=(a*a) %md;
        b/=2;
    }
    return res;
}


ll solve_first_3_digit(ll n, ll m)
{
    double x=m* log10(n)  - (ll)( m* log10(n) );
    x=pow(10, x);

    ll res=x*100;
    return res;
}


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n;
        cin>>n>>m;

        ll ans1=solve_first_3_digit(n,m);
        ll ans2=solve_last_3_digit(n, m);
        ll ans=bigmod(n,m);

        pcas(cs);
        printf("%lld %03lld\n", ans1, ans2);

        //cout<<ans1<<" "<<ans2<<endl;
        //cout<<ans<<endl;
    }
}
