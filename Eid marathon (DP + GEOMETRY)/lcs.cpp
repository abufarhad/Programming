#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lcs(string a, string b)
{
    ll  n,m;
    n=a.size(), m=b.size();
    ll dp[n+1][m+1];

    for(ll i=0;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
        {
            if(i==0|| j==0) dp[i][j]=0;
            else if(a[i-1]==b[j-1] ) dp[i][j]=dp[i-1][j-1]+1;
            else  dp[i][j]=max( dp[i-1][j], dp[i][j-1] );
        }
    }
    return dp[n][m];

}

int main()
{
    string a,b;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ll ans=lcs(a,b);
        cout<<ans<<endl;
    }

}
