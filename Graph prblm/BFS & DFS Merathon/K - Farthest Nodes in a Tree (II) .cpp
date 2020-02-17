//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)              cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x)              (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)  to_string(n)
#define N 300006
vector<ll>v[N], cost[N];
bool vis[N];
ll dist[N];

void bfs(ll src)
{
    queue<ll>q;
    fr(i, N)vis[i]=0,dist[i]=0;
    q.push(src);
    dist[src]=0;
    vis[src]=1;

    while(!q.empty())
    {
        ll top=q.front();
        q.pop();

        for(ll i=0;i<v[top].size();i++)
        {
            ll it=v[top][i];
            if(!vis[it])vis[it]=1, dist[it]=dist[top]+cost[top][i], q.push(it);
        }
    }
}

int main()
{
    fast;
    ll t;
    scl(t);
    tcas(cs, t)
    {
        ll n,x,y,z;
        cin>>n;
        fr(i, n-1)
        {
            cin>>x>>y>>z;
            v[x].pb(y);
            v[y].pb(x);

            cost[x].pb(z);
            cost[y].pb(z);
        }

        bfs(0);
        ll mx=-1, nxt_srt;
        fr(i, n)   if(dist[i]> mx)mx=dist[i], nxt_srt=i;

        bfs(nxt_srt);
        mx=-1;

        fr(i, n)   if(dist[i]> mx)mx=dist[i];

        cout<<"Case "<<cs<<": "<<mx<<endl;
        fr(i,n)v[i].clear() , cost[i].clear();
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


/* Another way

#include <bits/stdc++.h>

#define pii             pair <int,int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             30001
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d:\n",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long


using namespace std;

vector<int> graph[MAX],cost[MAX];

int dis[MAX];
int dis1[MAX];
int a,b,max_dis,n;

void BFS(int src)
{
    dis[src]=0;
    queue<int>Q;
    Q.push(src);
    while(!Q.empty())
    {
        int f= Q.front();
        Q.pop();
        if(dis[f]>max_dis)
        {
            max_dis=dis[f];
            a=f;
        }
        //  loop(i,SZ(graph[u]))
        for(int i=0; i<graph[f].size(); i++)
        {
            int v=graph[f][i];
            if(dis[v]==-1)
            {
                dis[v]=dis[f]+cost[f][i];
                Q.push(v);
            }
        }
    }
}

void BFS1(int src)
{
    dis1[src]=0;
    queue<int>Q;
    Q.push(src);
    while(!Q.empty())
    {
        int f= Q.front();
        Q.pop();
        // loop(i,SZ(graph[u]))
        for(int i=0; i<graph[f].size(); i++)
        {
            int v=graph[f][i];
            if(dis1[v]==-1)
            {
                dis1[v]=dis1[f]+cost[f][i];
                Q.push(v);
            }
        }
    }
}

void allclear()
{
    loop(i,n)
    {
        graph[i].clear();
        cost[i].clear();
        dis[i]=-1;
        dis1[i]=-1;
    }
    max_dis=-1;
    a=b=-1;
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t,x,y,w;
    sf(t);

    TEST_CASE(t)
    {
        sf(n);
        allclear();
        loop(i,n-1)
        {
            sfff(x,y,w);
            graph[x].pb(y);
            graph[y].pb(x);
            cost[x].pb(w);
            cost[y].pb(w);
        }
        BFS(0);
        b=a;
        loop(i,n)
        {
            dis[i]=-1;
            max_dis=-1;
        }
        BFS(b);
        b=a;
        BFS1(b);
        PRINT_CASE;
        loop(i,n)
        {
            pf("%d\n",max(dis[i],dis1[i]));
        }
    }
    return 0;
}
*/
