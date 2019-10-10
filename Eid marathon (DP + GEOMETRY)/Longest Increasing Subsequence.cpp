#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  N 100007
ll a[N],dp[N];

int main()
{
    ll m,n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)cin >>a[i];
    dp[0]=a[1];
    ll len=1;

    for(i=2;i<=n;i++)
    {
        if(a[i]> dp[len-1 ])dp[len++]=a[i];//cout<<i<<" "<<a[i]<<" "<<len<<endl,
        else
        {
            ll k=lower_bound(dp, dp+len, a[i])-dp;
           // cout<<i<<" "<<a[i]<<" -- "<<k<<endl;
            dp[k]=a[i];
        }
    }
    cout<<len<<endl;

}
