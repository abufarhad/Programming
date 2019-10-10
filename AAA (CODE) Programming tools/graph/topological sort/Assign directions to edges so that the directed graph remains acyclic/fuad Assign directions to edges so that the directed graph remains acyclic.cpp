

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

#define MOD                 1000000007
#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)
#define N 100005

vector<int>v[N]; /// will be used for topological sorting

vector<int>stk;  /// we will use stk vector like stack for coding simplicity ( i prefer it )
bool vis[N];

void topsort(int s) ///topological sorting function
{
    vis[s]=true;

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if(vis[now]==false)
        {
            topsort(now);
        }
    }
    stk.pb(s);
}

int main()
{

    int n; ///number of node in the graph
    sci(n);

    int dir_edge; /// number of directed edge;
    sci(dir_edge);

    set<int>dir_sub_graph; /// by traversing this set we will do topological sorting later

    for(int i=0;i<dir_edge;i++) /// input data of directed edge
    {
        int a,b;
        scii(a,b);
        v[a].pb(b);
        dir_sub_graph.insert(a);
        dir_sub_graph.insert(b);

    }
    int undir_edge; /// number of undirected edge
    sci(undir_edge);
    vector<pair<int,int> >undir_edge_list(undir_edge);

    for(int i=0;i<undir_edge;i++)  /// input data of undirected edge
    {
        scii( undir_edge_list[i].first , undir_edge_list[i].second ) ;

    }



    for(set<int>::iterator it=dir_sub_graph.begin();it!=dir_sub_graph.end();it++)  /// topsort() calling for topological sorting
    {
        if(vis[*it]==false)
        {
            topsort(*it);
        }
    }

    reverse(stk.begin(),stk.end());  /// this will make stk vector in topsort order

    vector<pair<int,int> >undirected_edge_in_dierected; /// as variable name says


    for(int i=0;i<undir_edge_list.size();i++)
    {
        int from,to;                    ///it's an assumption of direction between pair elements (from,to)=(u,v)
        from=undir_edge_list[i].first;
        to=undir_edge_list[i].second;

        /// we will find which is earlier in stk vector ( stk is topological sorted) if from(variable) is earlier than to(varibale),then our assumption is ok or not.
        ///if not ok then we will just change the direction

        int from_place=-1;
        int to_place=-1;
        for(int j=0;j<stk.size();j++)
        {
            if(stk[j]==from)
            {
                from_place=j;
            }
            if(stk[j]==to)
            {
                to_place=j;
            }

        }

        if(from_place<to_place)   /// ok conditin
        {
            undirected_edge_in_dierected.pb( make_pair(from,to) );
        }
        else /// not ok condition
        {
            undirected_edge_in_dierected.pb( make_pair(to,from) );
        }


    }


    cout<<" undirected edges after given direction :"<<endl;
    for(int i=0;i<undirected_edge_in_dierected.size();i++)
    {

        cout<<undirected_edge_in_dierected[i].first<<" -> "<<undirected_edge_in_dierected[i].second<<endl;
    }



    return 0;

}
///sample data from the article

//6
//10
//0 5
//5 1
//1 2
//2 3
//3 4
//0 1
//5 2
//1 3
//1 4
//2 4
//
//3
//3 0
//4 5
//2 0
