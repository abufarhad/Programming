//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back

int main()
{
    ll t,i,m,n,b,j,k;
    while(cin>>t)
    {
        ll ans=0,sum=0;
        if(t==0) return 0;
        ll a[10005];

        fr(i,t)cin>>a[i];
        fr(i,t)
        {
            sum+=a[i];
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }
        if(ans>0)printf("The maximum winning streak is %lld.\n", ans);
        else printf("Losing streak.\n");
    }
}
