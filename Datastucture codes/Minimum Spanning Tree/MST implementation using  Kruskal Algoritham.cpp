//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define N 100000
vector<pair<ll , pr> >v;
ll par[N];

ll pfind(ll n)
{
    if(par[n]==n)return n;
    else return par[n]= pfind(par[n]);

    //while(n != par[n])n=par[n];
    //return n;
}

void unionmake(ll x, ll y)
{
    ll p=pfind(x);
    ll q=pfind(y);

    par[q]=p;
}


ll kruskal()
{
    ll ans=0;
    sort(all(v));
    for(auto now : v)
    {
        ll par1=pfind(now.ss.ff );
        ll par2=pfind(now.ss.ss );

        //cout<<par1<<" - "<<par2<<endl;
        if(par1 != par2)
        {
            cout<<now.ss.ff<<" - "<<now.ss.ss<<endl;
            ans+=now.ff;
            unionmake(par1, par2);
        }
    }
    return ans;
}

vector<ll>vv[N];
bool vis[N];
bool dfs(ll src)
{
    //cout<<src<<" ";
    vis[src]=1;
    for(auto now: vv[src])
    {
        if(!vis[now])dfs(now);
    }
}


int main()
{
    ll n , m , i , j , k, x, y, w;
    scll(n , m);

    fr(i , n+1)par[i]=i;
    fr(i , m)
    {
        scll(x, y), scl(w);
        v.pb( {w,  {x, y } } );

        vv[x].pb(y);
        vv[y].pb(x);
    }

    ll cnt=0;
    fr(i , n)
    {
        if(!vis[i])dfs(i) , cnt++;
        //pn;
    }

    if(cnt==1)
    {
        ll ans=kruskal();
        pfl(ans);
    }
    else cout<<"Not possible to find Mst,Found More then one connected component"<<endl;

}

/*
make_ set(v) operation in line 2 has the complexity of O (V)
Sorting E edges takes O (E log E) time
find_set and union operation for each edge in G taking time of O (E log V).

Complexity : O (1) + O (V) + O (E log E) +( E log V)= E log E
input
5 15
0 1 4
0 2 4
1 2 2
1 0 4
2 0 4
2 1 2
2 3 3
2 5 2
2 4 4
3 2 3
3 4 3
4 2 4
4 3 3
5 2 2
5 4 3

output
1 - 2
2 - 5
2 - 3
3 - 4
0 - 1
14

*/

