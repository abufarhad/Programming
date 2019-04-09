#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

#define MAX 100001
#define INF (1<<20)
#define pii pair< int, int >
#define pb(x) push_back(x)

struct comp
{
        bool operator()(const pii &a, const pii &b)
        {
            return a.second > b.second;
        }
};

priority_queue<pii, vector<pii > , comp> Q;
///priority_queue<pii, vector<pii > , greater<pii> > Q;
vector<pii > G[MAX];
int D[MAX];
bool F[MAX];

int main()
{
    int i, u, v, w, sz, nodes, edges, starting;

    // create graph
    cout << "Enter the number of vertices and edges: ";
    cin >> nodes >> edges;
    cout << "Enter the edges with weigth: <source> <destination> <weigth>: \n";
    for (i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        G[u].pb(pii(v, w));
        G[v].pb(pii(u, w)); // for undirected
    }
    cout << "Enter the source node: ";
    cin >> starting;

    // initialize distance vector
    for (i = 1; i <= nodes; i++)
        D[i] = INF;
    D[starting] = 0;
    Q.push(pii(starting, 0));

    // dijkstra
    while (!Q.empty())
    {
        u = Q.top().first;
        Q.pop();
        if (F[u])
            continue;
        sz = G[u].size();    cout<<"Size "<<sz<<endl;
        for (i = 0; i < sz; i++)
        {
            v = G[u][i].first;            cout<<"v= g[u][i].first "<<v<<endl ;
            w = G[u][i].second;         cout<<"w= g[u][i].second "<<w<<endl;
                                               cout<<endl;
            if (!F[v] && D[u] + w < D[v])
            {
                D[v] = D[u] + w;
                 cout<<"V="<<v<<" "<<"distance(v) ="<<D[v]<<endl;
                 cout<<endl;
                Q.push(pii(v, D[v]));
            }
        }
        F[u] = 1; // done with u
    }
    cout<<endl<<endl;


    // result
    for (i = 1; i <= nodes; i++)
        cout << "Node " << i << ", min weight = " << D[i] << endl;
    return 0;
}
