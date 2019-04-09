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


vector< pair<int,int> >v[40005];

bitset<40003>bs;
LL ans;

void dfs(int source,int c)
{


    bs[source]=0;
    for(int i=0;i<v[source].size();i++){

        if(bs[ v[source][i].first ]==1 && v[source][i].second>=c)
        {
            ans++;
            dfs( v[source][i].first,c);
        }
    }

}

int main()
{
    //freopen("out.txt","w",stdout);
    int T,t;

    sci(T);
    t=1;
    while(t<=T){
        int n_node,n_edge;LL weight;
        sci(n_node);sci(n_edge);

        int from,to;

        for(int i=0;i<n_edge;i++){

            cin>>from>>to>>weight;

            v[from].push_back( make_pair(to,weight)    );
            v[to].push_back( make_pair(from,weight)    );
        }

        LL q;
        scl(q);
        printf("Case %d:\n",t);
        while(q--)
        {
            bs.set();
            ans=0;
            scl(weight);
            dfs(1,weight);
            printf("%lld\n",ans);
        }
        ++t;
        for(int i= 1;i<=n_node;i++)
            v[i].clear();

    }
    return 0;
}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
