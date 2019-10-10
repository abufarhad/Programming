
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
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
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
ll dp[N];

ll knapsacp(ll n, ll weight, ll w[], ll c[])
{
    fr(i,n)fr(j, weight+1) if(j-w[i] >=0) dp[j]= max(dp[j], dp[j-w[i] ]+c[i] );
    return dp[weight];
}

int main()
{
    ll m,n,t,b,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0;

    ll weight;
    scl(n);scl(weight);
    ll  w[n], c[n];
    fr(i,n)cin>>c[i]>>w[i];

    ans=knapsacp(n, weight, w, c);
    pfl(ans);

    return 0;
}

