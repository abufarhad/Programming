
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
#define pf(x)              printf("%lld ",x)

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

#define N 200005

vector<ll>v[N], parent(N , -1) ;
ll color[N];
bool vis[N];

ll cycle_start , cycle_end;

bool dfs(ll s, ll par )
{
    vis[s]=1;
    for(auto now : v[s])
    {
        if( now==par )continue;
        if(vis[now] )
        {
            cycle_start=now;
            cycle_end=s;
            return true;
        }
        parent[now ]=s;
        if( dfs(now , s ) ) return true;
    }
    return false;
}

int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll n, m,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=inf,sum=0 ;

        cin>>n>>m;
        fr(i , m)
        {
            scll(x, y);

            v[x].pb(y);
            v[y].pb(x);
        }

        cycle_start=-1, cycle_end;

        mem(color, 0);
        mem(vis , 0);



        fr1(i , n)
        {
            if( !vis[i]  and dfs(i , parent[i] ) ) break;
        }

        if(cycle_start ==-1 )cout<<"No cycle detected"<<endl;
        else
        {
            cout<<"Cycle detected"<<endl;

            vector<ll>Cycle;

            Cycle.pb( cycle_start );

            for(i=cycle_end; i!=cycle_start ; i=parent[i]  )Cycle.pb( i );

            Cycle.pb( cycle_start );

            for(auto now: Cycle)pf(now);
            pn;
        }
    }
return 0;
}

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1


