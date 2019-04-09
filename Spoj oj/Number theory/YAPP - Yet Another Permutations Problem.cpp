#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define mod 1000000007

ll Moduler_exponentiation(ll p,ll q,ll m)
{
    ll res=1;
    if(q==0) return 1;
    ll x=p%m;
    while(q>0)
    {
        if(q&1) res= (res*x)%m;

        q=q>>1;
        x=(x*x)%m;
    }
    return res;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,p,q,z,ans;
    scl(t);

    for(x=1; x<=t; x++)
    {
        scl(q);
       ans= Moduler_exponentiation(2,q-1,mod); ///  Compute  (p^q)%m
       cout<<ans<<endl;
    }

return 0;
}


