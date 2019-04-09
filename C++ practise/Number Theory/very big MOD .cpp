#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define scl(x) scanf("%lld",&x)

ll  bigmul(ll a,ll b,ll m)
{
    if(b==0) return 0;
    if(b%2==0)
    {
        ll c=bigmul(a,b/2,m);
        c= (c+c)%m;
        return c;
    }
    else
        return (a+bigmul(a,b-1,m) ) %m;
}

ll BigMod(ll a,ll b,ll m)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        ll c=BigMod(a,b/2,m);
        c= bigmul(c,c,m);
        return c;
    }
    else
        return bigmul(a,BigMod(a,b-1,m),m ) ;

}

int main()
{

    ll  a,b,m,t,ans;
    scl(t);
    for(int x=1; x<=t; x++)
    {
        scl(a),scl(b),scl(m);
        if(a==0&&b==0&&m==0) return 0;
        printf("Case %d: %lld\n",x,BigMod(a,b,m));
    }
    return 0;
}
