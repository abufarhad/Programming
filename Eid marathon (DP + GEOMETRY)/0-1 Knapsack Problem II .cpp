#include<bits/stdc++.h>
using namespace std;
#define inf 1<<30
#define ll long long
int main()
{
    ll m,i,j;
    ll dp[10005];
    fill_n(dp, 10005,inf );
    dp[0]=0;

    ll n, w, v, c,ans=0;
    cin>>n>>w;

    for(i=0;i<n;i++)
    {
        cin>>v>>c;
        for(j=10000; j>=v;j--)
        {
            dp[j]=min(dp[j], dp[j-v]+c);
        }
    }

    for(i=0;i<10001;i++) if(dp[i]<=w)ans=i;

    cout<<ans<<endl;
}
