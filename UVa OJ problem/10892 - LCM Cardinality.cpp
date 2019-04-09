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



ll lcm(ll m, ll n )
{
    ll g=__gcd(m,n);
    return ((m*n)/g);
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    vector<ll>v;
     while(cin>>n)
     {
         cnt=0;
         if(n==0)return 0;

         fr1(i,sqrt(n))
         {
            if(n % i == 0)
            {
            x = n / i;
            v.pb(i);
            if(i != x) v.pb(x);
            }
         }

         sort(v.begin(),v.end());
         //fr(i,v.size())cout<<v[i]<<" ";

         for(i=0;i<v.size();i++)
         {
             for(j=i;j<v.size();j++)
             {
                 if( lcm(v[i],v[j])==n ){cnt++;}//cout<<v[i]<<" "<<v[j]<<endl;
             }
         }
        printf("%lld %lld\n",n,cnt);

         v.clear();
     }

return 0;
}




