#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

ll xor_sub_sum( ll a[ ], ll n)
{
    ll ans=0,freq;
    fr(i,n)
    {
        freq=(i+1)*(n-i);
        if(freq%2 )
        {
            ans^=a[i];
        }
    }
    return ans;
}
int main()
{
    ll t, m,n,i,k;
    cin>>n;
    ll a[n+1];
    fr(i,n)cin>>a[i];

    cout<<xor_sub_sum( a, n)<<endl;
}
