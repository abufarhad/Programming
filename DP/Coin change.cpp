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
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)              printf("%lld ",x)

#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 200005

ll n,tot, a[N], cnt=0 , dp[500][500];

ll coin_way(ll a[])
{
    ll i , j, way[tot+1];
    mem(way , 0);

    way[0]=1;

    fr(i, n)
    {
        for(j=a[i] ; j<= tot; j++ )
        {
            way[j]+=way[j- a[i] ];
        }
    }
    ll ans=way[tot];
    return ans;
}

ll min_coin(ll  a[] )
{
    mem(dp , 0);

    fr(i , tot+1)dp[0][i]=inf;
    fr(i , n+1)dp[i][0]=0;


    fr1(i , n)
    {
        for(ll j=0; j<=tot; j++ )
        {
            if(j>=a[i-1]) dp[i][j]=min(dp[i-1][j]  , 1+ dp[i][ j-a[i-1] ]   );
            else dp[i][j]=dp[i-1][j];
        }
    }
    ll ans=dp[n][tot];

    cout<<"Min coin "<<endl;
    pfl(ans);
}

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;
        ll cn=0,ans=0,sum=0 , mx=-1;

        scll(n, tot);

        fr(i , n)cin>>a[i];
        mem(dp , 0);

        min_coin(a);
        cout<<"Number of coin way "<<endl;
        ans=coin_way(a);
        pfl(ans);
    }
return 0;
}

