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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

vector<ll>v[25];
ll dist[25];

ll bfs(ll src, ll dest)
{
    fr(i,25)dist[i]=0;
    queue<ll>q;  q.push(src);
    dist[src]=0;

    while(!q.empty())
    {
        ll u=q.front(); q.pop();
        fr(i, v[u].size())
        {
            ll f=v[u][i];
            //cout<<"F= "<<f<<" ";
            if(dist[f])continue;
            dist[f]=dist[u]+1;
            q.push(f);
        }
        //pn;
    }
   // fr1(i,dest)cout<<dist[i]<<" ";
    //pn;
    if(dist[dest]==0)return -1;
    return dist[dest];
}

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(t);
      tcas(x,t)
      {
      scl(n);
      fr1(i,n)
      {
          scl(k);
          v[i].pb(i+1);
          if(k<0)
          {
              ll tmp=i+k;
              if(tmp>=1)v[i].pb(tmp);
              continue;
          }
          ll tmp1=i+k;
          if(tmp1>n+1)continue;
          v[i].pb(tmp1);

      }
      pfl( bfs(1,n+1) );
      fr(i,25)v[i].clear();
      }

return 0;
}
