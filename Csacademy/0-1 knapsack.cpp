#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

ll knapsack(ll n, ll weight, ll c[], ll v[] )
{
    ll dp[n+1][weight+1];

    fr(i,n+1)
    {
        fr(j,weight+1)
        {
            if(i==0 || weight==0) dp[i][j]=0;
            else if( v[i-1]<=j ) dp[i][j]=max( c[i-1]+ dp[i-1][ j-v[i-1] ], dp[i-1][j] );
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][weight];
}

int main()
{
    ll i,j,m,n,w;
    cin>>n>>w;
    ll v[n], c[n];
    fr(i,n)cin>>v[i]>>c[i];

    cout<<knapsack(n,w,v,c)<<endl;

}
