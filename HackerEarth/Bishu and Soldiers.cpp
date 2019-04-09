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





int main()
{

    ll m,n,t,i;
    scl(n);
    ll a[n+1],sum=0;
    fr(i,n){cin>>a[i];}
    cin>>t;
    while(t--)
    {
        ll ans=0,cnt=0,x;
        cin>>x;
        fr(i,n)
        {
            if(a[i]<=x){ans+=a[i];cnt++;}
        }
        cout<<cnt<<" "<<ans<<endl;
    }

    return 0;
}





