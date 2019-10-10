//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/
//src: Geekforgeeks

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
#define inf                  1<<28
#define debug               printf("I am here\n")


ll calc(ll coin[], ll n, ll m)
{
    ll dp[m+1];
    dp[0]=0;
    fr1(i, m)dp[i]=inf;

    fr1(i, m)
    {
        for(ll j=0; j<n;j++)
        {
            if(coin[j]<=i )
            {
                ll sub_res=dp[i-coin[j] ];
                if(sub_res!=inf and sub_res+1<dp[i] ) dp[i]=sub_res+1;
            }
        }
    }
    return dp[m];

}
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(m),scl(n);
      ll  coin[n];
      fr(i,n)cin>>coin[i];
      ans=calc(coin, n, m);
      pfl(ans);

return 0;
}

/// you should actually read the stuff at the bottom
/* stuff you should look for
    *print right output
    * int overflow, array bounds
    * special cases (n=1?), set tle
    * do smth instead of nothing and stay organized
*/


