#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Mod 142857

const int Maxn = 1e6 + 1 ;//,Mod = 1e9 + 7;

ll mod(ll x, ll p)
{
    x %= p;
    if (x < 0)
        x += p;
    return x;
}

ll inverse(ll x, ll p)
{
    x = mod(x, p);
    if (x == 1)
        return x;
    return mod(1LL * (-p / x) * (inverse(p % x, p)), p);
}


ll NcR(ll n, ll r)
{

    int fact[Maxn],i;
    fact[0]=1;
    for( i = 1; i < Maxn; i++)
    {
        fact[i] =  1* fact[i - 1] * i % Mod;
    }

    int ifact[Maxn];
    ifact[0] = 1;
    for(int i = 1; i < Maxn; i++)
    {
        ifact[i] = 1 * ifact[i - 1] * inverse(i, Mod) % Mod;
    }
    int ret = (1 *ifact[n - r] * ifact[r]) % Mod ;
    ret = (1 * ret * fact[n]) % Mod;
    return ret;
}

int main()
{
    ll n,c,r,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        cout << NcR(n,r) << endl;
    }
}
