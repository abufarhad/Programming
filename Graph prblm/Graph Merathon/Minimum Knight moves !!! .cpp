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
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};


ll bfs(ll a1, ll b1, ll a2, ll b2)
{
    ll moves[10][10], vis[10][10], m,n;
    memset(moves, 0, sizeof(moves));
    memset(vis, 0, sizeof(vis));

    pair<ll,ll>p;
    queue< pair<ll,ll> > q;

    p.first=a1;
    p.second=b1;

    q.push(p);
    vis[a1][b1]=0;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        if(p.first==a2 && p.second==b2 ) return moves[a2][b2];
        fr1(i,8)
        {
            m=p.first+x[i];
            n=p.second+y[i];
            if(m>8 || m<1 ||  n>8 || n<1)continue;
            else
            {
                vis[m][n]=1;
                moves[m][n]=moves[p.first][p.second]+1;
                q.push(make_pair(m,n));
            }
        }
    }
}

int main()
{
    ll m,n,i,j,k,a1,b1;
    char a,b;
    cin>>k;
    while(k--)
    {
        cin>>a>>a1>>b>>b1;
        pfl(bfs( a-'a'+1, a1, b-'a'+1, b1));
    }
}
