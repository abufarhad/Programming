#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

ll  Maxn=10005,  Mod =10000007;
ll fact[100005];
// we need to define a pow function to raise a to m-2
// function below calculates (a^b)%Mod
ll power(ll a, ll b, ll Mod)
{
    ll x = 1, y = a;
    while (b > 0)
    {
        if (b%2)
        {
            x = (x*y)%Mod;
        }
        y = (y*y)%Mod;
        b /= 2;
    }
    return x%Mod;
}

ll modular_inverse(ll n )
{
    return power(n, Mod-2, Mod);
}

ll nCr(ll n, ll k)
{
    return  fact[n]*((modular_inverse(fact[k]*modular_inverse(fact[n-k]))%Mod))%Mod;
}


int main()
{
    ll m,n,i,j,a,b,c;


    fact[0]=1;
    for(ll i=1; i<=Maxn; i++)
    {
        fact[i]=1LL*fact[i-1]*i%Mod;
    }

    cin>>n;
    while(n--)
    {
        ll ans=0;
        cin>>m;
        for(i=0; i<=m; i++)
        {
            ans^=nCr(m,i);
            ans%=Mod;
        }
        cout<<ans<<endl;
    }

    /*
    while(n--)
    {
        ll ans=0;
        cin>>a>>b>>c;
        ll dif=b-a;
        ll total=((c-a)/(abs(dif)) )+1;
        ll cnt=0;
        for(i=a; ;i=i+abs(dif))
        {
            //cout<<i<< " ";
            ans+=i;
            cnt++;
            if(cnt==total)break;
        }
        cout<<ans<<endl;
    }
    */
}
