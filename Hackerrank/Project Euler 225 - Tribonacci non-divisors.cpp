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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      vector<ll>v,v1;
      for(i=0;i<n;i++)
      {
          cin>>x>>y>>z>>k;
          v.pb(x),v.pb(y),v.pb(z);
      }
      for(i=2;i<=100000000;i++)
      {
          ans=v[i]+v[i-1]+v[i-2];
          v.pb(ans);
      }
      fr(i,v.size())
      {
          if(v[i]%i !=0)
      }

      pfl(ans);

return 0;
}




