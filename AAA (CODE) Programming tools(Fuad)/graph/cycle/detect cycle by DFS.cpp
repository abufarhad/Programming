#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)          for(i=a;i<b;i++)
#define repr(i,a,b)         for(i=a;i>=b;i--)

#define LL                  long long
#define ull                 unsigned long long int
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64d ",n)
#define pfs(s)              printf("%s\n",s)

#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 200005

vector<int>adj[N];
bool vis[N];

int flag=0;


void DFS(int source,int parent)
{
    vis[source]=true;

    for(int i=0;i<adj[source].size();i++){

        if(vis[adj[source][i]]==false)
            DFS(adj[source][i],source);

        else if(adj[source][i]!=parent)
            flag+=1;

    }


}

int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;
    int t1,t2;

    for(int i=0;i<n_edge;i++)
    {
        cin>>t1>>t2;
        adj[t1].push_back(t2);
        adj[t2].push_back(t1);
    }
    DFS(3,-1);
    cout<<flag<<endl;
    if(flag==1)
     cout<<"contain cycle"<<endl;
     else
        cout<<"no cycle"<<endl;

    return 0;
}
