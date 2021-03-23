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

ll knapsacp(ll n, ll weight, ll w[], ll c[])
{
    ll k[n+1][weight+1];

    fr(i,n+1)
    {
        fr(j, weight+1)
        {
            if(i==0 || j==0)  k[i][j]=0;
            else if(w[i-1]<=j)    k[i][j]= max( c[i-1]+k[i-1][j-w[i-1]],   k[i-1][j]  );
            else   k[i][j]=k[i-1][j];
        }
    }
    return k[n][weight];
}



int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(t);
    while(t--)
    {
        ll weight;
        scl(n);
        scl(weight);
        ll  w[n], c[n];
        fr(i,n)cin>>c[i];
        fr(i,n)cin>>w[i];

        ans=knapsacp(n, weight, w, c);
        pfl(ans);
    }

    return 0;
}
/* better approach

#include<bits/stdc++.h>
using namespace std;
int dp[105][100005]= {0},w[105],v[100005];
int main()
{
    int t,n,k;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        cin>>n>>k;
        for(int i=1; i<=n; i++)  cin>>w[i]>>v[i];

        for(int i=1; i<=n; i++)
            for(int j=1; j<=k; j++)
                if(j>=w[i]) dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];

        cout <<"Case "<<j<<": "<<dp[n][k]<<endl;
    }
    return 0;
}

*/
/*
ll knapsack(ll n , ll w, ll val[] , ll wt[])
{
    ll dp[n+1][w+1];
    mem(dp , 0);
    fr1(i , n)
    {
        for(ll j=wt[i-1]; j<= w ; j++)
        {
             if(wt[i-1] <=j )dp[i][j]=max(dp[i-1][j]  ,  val[i-1]+dp[i-1][j- wt[i-1] ] );
        }
    }
    return dp[n][w];
}
*/
/*
3
4 10
10 40 30 50
5 4 6 3
ans=90
*/

