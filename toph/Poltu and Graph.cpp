#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair< ll , pair<ll,ll> >
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 200005

ll par[N] , sz[N] , ans[N];

ll pfind(ll x )
{
    if(par[x]==x )return x;
    return par[x]=pfind(par[x]);
}

void make_union(pr x)
{
    cout<<x.ff<< " - "<<x.ss.ff<<" - "<<x.ss.ss<<endl;
    ll p=pfind(x.ss.ff);
    ll q=pfind(x.ss.ss);

    if(p==q)return;
    cout<<p<<" "<<q<<" "<<sz[p]<<" "<<sz[q]<<endl;
    sz[p]+=sz[q];
    cout<<p<<" "<<q<<" "<<sz[p]<<" "<<sz[q]<<endl;

    sz[q]=0;
    par[q]=p;
}


int main()
{
    ll t;

    ll m,n,b,c,d, e,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt,um=0;
    cin>>n>>e;

    fr1(i, n)par[i]=i , sz[i]=1;
    priority_queue<pr,vector<pr>,greater<pr> >pq,query;

    fr1(i, n)
    {
        cin>>x>>y>>c;
        pq.push({c, {x, y} } );
    }

    cin>>q;
    fr1(i, q)
    {
        cin>>x>>y;
        query.push({ y, {x, i} });
    }



    while(!query.empty())
    {
        auto p=query.top();
        query.pop();

        //cout<<"p.ff "<<pq.top().ff<<" "<<p.ff<<endl;
        while( !pq.empty() and pq.top().ff <= p.ff  )
        {
            make_union(pq.top() );
            pq.pop();
        }
        //cout<<"pq.sz "<<pq.size()<<endl;

        ans[p.ss.ss ]=sz[pfind(p.ss.ff  ) ];
        cout<<p.ss.ss<<" and "<<p.ss.ff<<" "<<sz[pfind(p.ss.ff  ) ]<<endl;
    }

    fr1(i, q) cout<<ans[i]<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



