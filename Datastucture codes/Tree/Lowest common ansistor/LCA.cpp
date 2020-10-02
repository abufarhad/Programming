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
#define pcas(i)             cout<<"Case "<<i<<":"<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 200005

vector<ll>v[N];

ll n , st[N][20]  , level[N] , par[N];

void dfs(ll  src , ll from  , ll depth)
{
    par[src]=from;
    level[src]=depth;

    for(auto now : v[src])
    {
        if(now==from)continue;
        dfs(now , src , depth+1);
    }
}

void build_table()
{
    fr1(i , n)st[i][0]=par[i];


    for(ll j=1; (1<<j)<=n ; j++)
    {
        for(ll i=1; i<=n ; i++)
        {
            st[i][j]=st[  st[i][j-1 ]  ][j-1];
        }
    }
}

ll lca(ll p, ll q)
{
    if( level[p] <= level[q])swap(p, q);

    ll log=log2(level[p]);

    for(ll i=log ; i>=0 ; i-- )
    {
        if( level[p]  -  (1<<i)   >= level[q] )
        p=st[ p ][i];
    }

    if(p==q)return p;

    for(ll i=log ; i>=0 ; i-- )
    {
        if( st[p][i] !=st[q][i] )
        {
           p= st[p][i]  ;
           q= st[q][i]  ;
        }
    }

    return par[p];
}

int main()
{
    ll t;
    t=1;

    tcas(cs, t)
    {
        //memset(st , -1 , sizeof st);

        ll m,b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        scl(n);

        ll a[n];

        fr1(i , n-1)
        {
            scll(x, y);
            v[x].pb(y);
            v[y].pb(x);
        }

        dfs(1 , 1, 0);
        build_table();


        scl(q);
        //pcas(cs);
        while(q--)
        {
            ll root;
            cin>>root>>l>>r;
            ll n1,n2,n3;

            n1=lca(root ,l);n2=lca(l,r);n3=lca(root ,r);
            ll d1,d2,d3;

            //cout<<n1<<" "<<" "<<n2<< " "<<n3<<endl;

            d1=level[root]-level[n1];d2=level[root]-level[n2];d3=level[root]-level[n3];

            //cout<<level[j]<<" "<<level[l]<<" "<<level[r]<<" "<<level[n1]<<" "<<level[n2]<<" "<<level[n3]<<endl;
            //cout<<d1<<" "<<" "<<d2<< " "<<d3<<endl;


            if(d1>d2)swap(d1,d2),swap(n1,n2);
            if(d1>d3)swap(d1,d3),swap(n1,n3);
            cout<<n1<<endl;
        }

        fr(i , n+1)v[i].clear();
    }

return 0;
}
