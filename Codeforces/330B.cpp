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
ll vis[N];
vector<pr>v ;
int main()
{
    ll m , n , i , p, j;
    scll(n, m);

    fr(i , m)
    {
        ll x, y;
        scll(x, y);
        vis[x]=vis[y]=1;
    }

    j=0;
    fr1(i , n)
    {
      if(!vis[i] ){p=i;break;}
    }

    memset(vis , 0 , sizeof vis);

    fr1(i , n)
    {
        if(i!=p) v.pb({p , i });
    }

    cout<<v.size()<<endl;
    fr(i , v.size())cout<<v[i].ff<< " "<<v[i].ss<<endl;

}

