#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define pfl(x) printf("%lld\n",x)
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .
#define mod 10000007

ll Moduler_exponentiation(ll p,ll q,ll m)
{
    ll res=1;
    ll x=p%m;
    while(q>0)
    {
        if(q&1) res= (res*x)%m;
        q=q>>1;
        x=(x*x)%m;
    }
    return res%m;
}



int main()
{
    ll m,n,t,a,b,c,d,i,j,k,x,y,p,q,z,ans;


    for(x=1; ; x++)
    {
        ans=0;
        scl(p),scl(q);
        if(p==0&&q==0) return 0;

        a=  Moduler_exponentiation(p,q,mod)%mod;
        b= ( 2*Moduler_exponentiation(p-1,q,mod))%mod;
        c= (Moduler_exponentiation(p,p,mod) )%mod;
        d=((2* Moduler_exponentiation(p-1,p-1,mod)))%mod;

        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

        ans=(((a+b)%mod)+((c+d)%mod))%mod;

        pfl(ans);
    }

    return 0;
}


