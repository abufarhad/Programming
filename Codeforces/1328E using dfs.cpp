
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
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200005
vector<ll>v[N] ;
ll in[N] , out[N] , parent[N] , cnt;

void dfs(ll s , ll p )
{
    parent[s]=p;
    in[s]=++cnt;

    for(auto to : v[s])
    {
        if(to==p)continue;
        dfs(to , s);
    }

    out[s]=cnt;
}



int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cn=0,sum=0 ;
        scll(n, m);
        fr(i , n-1)
        {
            scll(x, y);
            v[x].pb(y);
            v[y].pb(x);
        }

        dfs(1, 0);

        fr(i , m)
        {
            ll mx=-1 , mn=inf;
            scl(x);
            fr(j , x)
            {
                scl(y);
                if(y!=1)y=parent[y];

                //Countdown starting from it's parent because maximum dist will be 1 . so, taking worst case .
                //Now taking max in[] time and min out[] time of all vertexes parent and if any of vertex parent in[] time
                //greater  then out[] time this will not be a valid case otherwise ok .

                mx=max(mx , in[y]);
                mn=min(mn , out[y]);
            }
           // cout<<mx<<" "<<mn<<endl;

            if(mx<=mn)pys;
            else pno;

        }
    }

return 0;
}

