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

    cout<<"Length of LCS "<<ans<<endl;

    //printing LCS

    vector<ll>v;

    for(i=n;i>=1;i--)
    {
        if(f[i]==ans )v.push_back(a[i]), ans--;
        //if(ans<0)break;
    }

    //cout<<v.size()<<endl;
    for(i=v.size()-1; i>=0;i--)cout<<v[i]<<" ";

    cout<<endl;
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    memset(f, 0, sizeof f);

    }

}


/*
https://ideone.com/EguJDX
*/
/*
9
1 15 1 10 13 1 1 19 8
5
6 7 1 2 32
8
7 8 9 1 2 3 4 5
7
6 7 9 5 7 20 1
9
1 15 1 10 13 1 1 19 8
16
1 2 3 4 5 3 4 6 7 1 2 3 8 5 6 10
*/
