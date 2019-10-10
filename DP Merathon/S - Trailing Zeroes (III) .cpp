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
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)


#define N 100006

ll calc_5(ll n)
{
    ll r=1,cnt=0, x=5;
    while(pow(x,r)<=n )
    {
        cnt+=(n/ pow(x, r ) );
        r++;
    }
    return cnt;
}
ll binarysearch(ll n)
{
    ll l=1, h=100000000*5, ans,m;

    while( l<h)
    {
        m=(l+h)/2;
        if(calc_5( m) >=n ) ans=m, h=m;
        else  l=m+1;
    }
    return ans;
}
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>t;
      tcas(i,t)
      {
          scl(n);
          ll ans= binarysearch(n);

         pcas(i);
         if( calc_5(ans)==n) pfl(ans);
         else printf("impossible\n");

      }

return 0;
}




