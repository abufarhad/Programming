//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
//ll  pow_calc(ll x, ll e){ ll res;  if (e == 0) res = 1; else if (e == 1) res = x;  else { res = bigpow(x, e / 2);  res = res * res;  if (e % 2) res = res * x; } return res; }
vector <ll>adj[10005];
bool visited[10005];
ll pre[10005];

void add(ll u,ll v)
{
    adj[u].pb(v);
    adj[v].pb(u);
}
void dfs(ll n)
{
    if(visited[n])
        return ;
    visited[n]=1;
    fr(i,adj[n].size())
    {
        ll v=adj[n][i];
        if(! visited[v])
        {
            dfs( v);
        }
    }
}

int main()
{
    int n,m,i,j,t,u,v;

    string s,c;
    scanf("%d\n",&t);

    while(t--)
    {
        //gets(c);
        getline(cin,c);
        n=c[0]-64;  ///  0 to n-1 prjnt loop ta calabo tai newya just
        while(1)
        {
            if(!getline(cin,s) || s.empty())
                break;
            u=s[0]-65;
            v=s[1]-65;
            add(u,v);
        }
        ll cnt=0;
        memset(visited,0,sizeof visited);
        fr(i,n)
        {
            if(!visited[i])
            {
                dfs(i);
                cnt++;
            }
        }

        if(t==0)
            pfl(cnt);
        else
            cout<<cnt<<endl<<endl;

        fr(i,n)adj[i].clear();
    }
    return 0;
}







