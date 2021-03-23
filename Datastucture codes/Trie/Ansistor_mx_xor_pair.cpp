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
#define pcas(i)             cout<<"Query "<<i<<": ";
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 2000001

ll a[N] , trie[31*N][3] , cnt[31*N];
vector<ll>v[N];
ll mx=-inf, root=0;

void Insert(ll n)
{
    ll now=0;
    for(ll i=31;i>=0; i--)
    {
        bool b=(n>>i)&1;
        if(! trie[ now  ][b] ) trie[now][b]=++root;

        now=trie[now][b];

        cnt[now]++;
    }
}

ll query(ll n)
{
    ll i, now=0, ans=0;
    for(i=31; i>=0; i--)
    {
        bool b=(n>>i)&1;
        if(trie[now][!b ] )
        {
            ans+=(1<<i);
            b^=1;
        }
        now=trie[now][b];
    }
    return ans;
}

void Remove(ll n)
{
    ll i, now=0;
    for(i=31; i>=0; i--)
    {
        bool b=(n>>i)&1;

        ll prev_rt=now;
        now=trie[now][b];

        cnt[now]--;
        if(cnt[now]==0)trie[prev_rt][b]=0;
    }
}

void dfs(ll s, ll par)
{
    if(s>1)mx=max(mx , query(a[s]) );

    Insert(a[s]);

    for(auto i: v[s])   if(i^par) dfs(i , s);

    Remove(a[s]);
}

int main( )
{
    ll t,i , j;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,k,x,y,z,l,r, p, q;
        ll cn=0,sum=0 ;

        scl(n);
        fr1(i , n) scl(a[i] );

        fr1(i , n-1)
        {
            scll(x, y);
            v[x].pb(y);
            v[y].pb(x);
        }

        dfs(1, 0);
        pfl(mx);
    }
return 0;
}

