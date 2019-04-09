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
//ll  pow_calc(ll x, ll e){ ll res;  if (e == 0) res = 1; else if (e == 1) res = x;  else { res = bigpow(x, e / 2);  res = res * res;  if (e % 2) res = res * x; } return res; }
vector <ll>v;
ll find_all_divisor(ll n)
{
    ll x;
    fr1(i,sqrt(n))
    {
        if(n % i == 0)
        {
            x = n / i;
            v.pb(i);
            if(i != x)
                v.pb(x);
        }
    }
    return v.size();
}


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(t);
    vector<ll>v1;
    for(i=1; i<=t; i++)
    {
        cnt=0;
        cin>>x>>y;
        v1.pb(x);

       j=0;
        while(v1[j] <=y )
        {
            v1.pb( v1[j]+find_all_divisor(v1[j]) );
            v.clear();
            fr(j,v1.size())cout<<v1[j]<<" ";
            pn;
            cnt++,j++;
        }

        printf("Case %lld: %lld\n",i, cnt);
        v1.clear(), v.clear();

    }

    return 0;
}




