#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define scl(x) scanf("%lld",&x)

ll BigMod(ll b,ll p,ll m)
{
    if(p==0) return 1;
    ll x = BigMod(b,p/2,m);
    x = (x*x)%m;
    if(p%2==1) x = (x*b)%m;
    return x;
}

ll getbase(string s, ll m)
{
    ll aa=0;
    ll l=s.size();
    for(ll i=0; i<l; i++)
    {
        aa=((10*aa)+(s[i]-48))%m;
    }
    return aa;
}

int main()
{

    string a,b;
    ll  m,t,ans,l,len,i,j;
    while(cin>>a>>b>>m)
    {
        if(a=="0"&&b=="0"&&m==0) break;

        ll base=getbase(a,m);
        ll res=1;
        len=b.size();
        for(j=0; j<len; j++)
        {
            int val=(b[j]-48);
            res=(BigMod(res,10,m)*BigMod(base,val,m))%m;
        }
        cout<<res<<endl;
    }
    return 0;
}
