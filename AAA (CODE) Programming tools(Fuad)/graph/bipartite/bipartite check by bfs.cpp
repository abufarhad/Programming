
#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define ull unsigned long long
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define sci(n) scanf("%d", &n)
#define scii(n,m) scanf("%d %d",&n,&m)
#define sciii(n,m,p) scanf("%d %d %d",&n,&m,&p)
#define scs(n) scanf("%s", n)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define Pi acos(-1.0)

vector<int>v[100];
int vis[100];
int color[100];
bool bipartate=true;

void bip_bfs(int s,int c){

    queue<int>q;
    q.push(s);
    color[s]=c;
    vis[s]=true;

    while(!q.empty()){

        int from=q.front();
        q.pop();

        for(int i=0;i<v[from].size();i++)
        {
            int to=v[from][i];

            if(vis[ to ]==false){
                vis[to]=true;

                color[ to ]=!color[from];
                q.push(to);

            }else if( color[ to ] == color[from])
            {
                bipartate=false;
                break;
            }
        }
    }

}


int main()
{

    int n_node,n_edge;
    sci(n_node);sci(n_edge);


    int from,to;
    for(int i=0;i<n_edge;i++)
    {
        sci(from);sci(to);
        v[from].pb(to);
        v[to].pb(from);
    }
    memo(color,-1);
    memo(vis,0);
    color[1]=1;
    bip_bfs(1,1);

    if(bipartate){
        cout<<"\n\n---------the given graph is bipartate ---------- "<<endl;
        cout<<"first part containing vertexes : ";
        for(int i=1;i<=n_node;i++)
            if(color[i]==1)
                cout<<i<<" ";

        cout<<"\n\nsecond part containing vertexes : ";
        for(int i=1;i<=n_node;i++)
            if(color[i]==0)
                cout<<i<<" ";

    }else
         cout<<"---------the given graph is not bipartate ---------- "<<endl;

    return 0;
}


/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
