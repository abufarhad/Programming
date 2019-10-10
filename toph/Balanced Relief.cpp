#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
 ll a[1000005], b[1000005];
int main()
{
    ll m,n,i,j,k;
    cin>>n>>m;

    fr(i,n)cin>>a[i];
    fr(i,m)cin>>b[i];
    sort(a,a+n);
    sort(b, b+m);

    ll l, r, ans=0;
    cin>>l>>r;
    fr(i,n)
    {
        ll tmp=l-a[i];
        ll tmp1=r-a[i];

        ll x=lower_bound(b, b+m, tmp )-b;
        ll y=upper_bound(b, b+m, tmp1)-b;

        ans+=(y-x);
    }
    cout<<ans<<endl;
}
