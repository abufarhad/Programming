#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)               printf("%lld ",x)

#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 2000005
ll x[N] , y[N];

void split_half(ll a[], ll x[], ll n, ll ex)
{
    fr(i ,  (1<<n) )
    {
        ll sm=0;
        fr(j , n )
        {
            //cout<<i<<" - "<<(1<<j)<<endl;
            if(i & (1<<j) ) sm+=a[j];
            //cout<<sm<<endl;
        }
        x[i]=sm;
    }
}

ll solve(ll a[] , ll n, ll sm)
{
    split_half(a, x, n/2, 0 );
    split_half(a, y, n-n/2 , n/2 );

    ll x_sz=(1<<n/2), y_sz= (1<< (n-n/2) );

    sort(y, y+y_sz );

    ll mx=0;
    fr(i , (1<<n/2) )
    {
        if(x[i]<=sm )
        {
            ll lw=upper_bound( y, y+y_sz , sm-x[i] )- y;
            lw--;

            mx=max(mx , y[lw]+x[i] );
        }
    }

    return mx;
}

int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll h, m,n,c,d, u,i,j,k,z,l,r, p, q;
        ll sm=0;

        scll(n, sm);
        ll a[n];
        fr(i , n)scl(a[i]);

        ll ans=solve(a, n, sm);
    }

return 0;
}

