#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000005
ll a[N], b[N], f[N];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll j, k, i, m, n;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];

    ll ans=0;
    for(i=1;i<=n;i++)
    {
        f[i]=lower_bound(b+1, b+ans+1, a[i])-b;

        ans=max(ans, f[i]);

        b[ f[i] ]=a[i];
        //cout<<f[i]<<" "<<b[f[i] ]<<" "<<a[i]<<endl;
    }
    ll len=ans;


    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    memset(f, 0, sizeof f);

    }

}


