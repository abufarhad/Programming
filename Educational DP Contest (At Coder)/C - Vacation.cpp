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


#define N 100006

ll dp[N][3],task[3][N], vis[N][3] , n;

ll solve(ll pos , ll last )
{
    if(pos == n+1 )return 0;

    if(vis[pos ][last] )return dp[pos ][last];
    vis[pos][last]=1;

    ll best=0;
    fr(i, 3)
    {
        if( i != last)
        {
            best=max(best , task[i][pos]+ solve(pos+1 , i) );
        }
    }

    return dp[pos ][last]=best;
}

int main()
{
    ll m,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;

    fr1(i, n)scll(task[0][i] ,task[1][i]) , scl(task[2][i] ) ;


    ans=max({ solve(1, 0)  , solve(1, 1) , solve(1, 2 )} );
    cout<<ans;
return 0;
}

///***************Before submit*****************

///    ****Please check all base case output***
///    *check for integer overflow,array bounds
///    *check for n=1


