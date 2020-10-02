//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>

#define N 105
ll dp[N][N], a[N];

ll total(ll st, ll en)
{
    ll sum=0;
    for(ll i=st; i<=en; i++)
    {
        sum=(sum+a[i])%100;
    }
    return sum;
}

ll mcm(ll st, ll en)
{
    if(st>=en)return 0;
    if(dp[st][en])return dp[st][en];

    ll ans=inf;
    for(ll mid=st; mid<en; mid++)
    {
        ll left=mcm(st, mid);
        ll right=mcm(mid+1, en);

        ll left_to_right=total(st, mid)*total(mid+1, en);

        ll total=left+ left_to_right + right;
        ans=min(ans, total);
    }

    return dp[st][en]=ans;
}



int main()
{
    ll t,n;
    while(cin>>n)
    {
        ll cnt=0,cn=0,ans=0,sum=0 ;
        fr(i,n)cin>>a[i];

        ans=mcm(0, n-1);

        memset(dp, 0, sizeof dp);
        cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




