#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>
using namespace std;
#define ll long long
#define ulli  unsigned ll int


#define sl(n) scanf("%lld", &n)
#define sl2(a,b) scanf("%lld%lld", &a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld", &a,&b,&c)
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define mkpr  make_pair
#define   ff   first
#define   ss  second
#define  srt(V)  sort(V.begin(),V.end());
#define nl printf("\n");

#define  PI  2*acos(0.0);
#define  INFP ( (ll)1<<62)
#define  INFN (0-(ll)1<<62)
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)
#define spc <<" "<<
#define limit 1000000000000
#define  pno  puts("NO");
#define  pys puts("YES");
#define  bug puts("bug");

#define  pmn puts("-1");
vector<ll>graph[200001];

typedef pair<ll int,ll int> iPair;

ll child[200001];
bool dead[200001];
ll frq[200001];
ll k,ans=0;


void dfs(ll u,ll p)
{
    child[u]=1;
    for(ll i=0; i<graph[u].size(); i++)
    {
        ll v=graph[u][i];
        if(!dead[v]&&v-p)
        {
            dfs(v,u);
            child[u]+=child[v];
        }
    }
}


ll centroid(ll u,ll p,ll sz)
{
    for(int x:graph[u])
    {
        if(!dead[x]&&p-x&&child[x]>sz)
        {
            return centroid(x,u,sz);
        }
    }

    return u;
}


void  freq_dfs(ll u,ll p,ll l,ll v)
{
    frq[l]+=v;
    for(ll x:graph[u])
    {
        if(!dead[x]&&x-p)
        {
            freq_dfs(x,u,l+1,v);
        }
    }
}

void  call_dfs(ll u,ll p,ll l)
{
    if(l<=k)
    {
        ans+=frq[k-l];
    }

    for(ll x:graph[u])
    {
        if(!dead[x]&&x-p)
        {

            call_dfs(x,u,l+1);
        }
    }
}


void  decompose(ll u,ll p)
{

    dfs(u,p);
    ll c=centroid(u,p,child[u]/2);
    dead[c]=true;

    for(ll x:graph[c])
    {
        if(!dead[x])
        {
            call_dfs(x,c,1);
            freq_dfs(x,c,1,1);
        }
    }

    for(ll x:graph[c])
    {
        if(!dead[x])
        {
            freq_dfs(x,c,1,-1);
        }
    }

    for(ll x:graph[c])
    {
        if(!dead[x])
        {
            decompose(x,c);
        }
    }
}


int main()
{

    ll n;
    cin>>n>>k;

    for1(n-1)
    {
        ll a,b;
        sl(a);
        sl(b);

        graph[a].pb(b);
        graph[b].pb(a);
    }

    frq[0]=1;
    decompose(1,0);

    cout<<ans<<endl;
}
