#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define md 1000000007
#define N 1000
ll k, n, d, ans;
ll dp[105][2];

ll solve(ll sum, ll  chk )
{
    if(sum==n )
    {
        if(chk)return 1;
        else return 0;
    }

    if(sum>n )return 0;

    if(dp[sum][chk] !=-1 )return dp[sum][chk];

    ans=0;
    for(ll i=1; i<=k; i++)
    {
        //recursion return only when it value is true
        ans= (ans%md+ solve(sum+i ,  (chk==1 or i>=d) ? 1: 0   )%md)%md;
    }

    return dp[sum][chk]=ans;
}

int main()
{
    ll i, j,  m;
    cin>>n>>k>>d;
    memset(dp, -1, sizeof dp);

    ans=solve(0, 0);
    cout<<ans<<endl;
}
