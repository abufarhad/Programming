#include<bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF (1e9+1)

int n,W;
int dp[MAX];

int main()
{
    fill(dp,dp+MAX,-INF);
    dp[0]=0;

    cin>>n>>W;
    for(int i=0; i<n; i++)
    {
        int v,w,m;
        cin>>v>>w>>m;

        for(int k=0; m>0; k++)
        {
            int key= min( m, (1<<k) );
            m-=key;

            int nv=key*v;
            int nw=key*w;
            for(int j=W; j>=nw; j--)
            {
                dp[j]=max(dp[j],dp[j-nw]+nv);
            }
        }
    }
    int ans=0;
    for(int i=0; i<=W; i++)
        ans=max(ans,dp[i]);
    cout<<ans<<endl;
    return 0;
}
