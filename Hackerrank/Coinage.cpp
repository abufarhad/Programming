//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define N 100006
ll cnt[N];
int main()
{
    ll m,n,t,a,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>t;
    while(t--)
    {
        ll ans=0;
        scl(n);
        cin>>a>>b>>c>>d;

        fr(i,N)cnt[i]=0;

        for(i=0;i<=b && i*2<=n;i++ )
            {for(j=0; j<=a&& j+2*i<=n ;j++) cnt[ j+2*i]++;}

        for(i=0;i<=c && i*5<=n;i++)
            {for(j=0;j<=d&&  i*5+j*10<=n;j++) ans+=cnt[n-  ( i*5+j*10) ];}

        pfl(ans);
    }


return 0;
}


