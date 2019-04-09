#include<bits/stdc++.h>
using namespace std;

#define max 100001
#define inf 10000
#define pii pair<int, int>
#define pb(x) push_back(x)
int par[500];

struct comp
{
    bool operator()(const pii &a, const pii &b)
    {
        return a.second>b.second;
    }
};
priority_queue<pii,vector<pii>, comp>q;
vector<pii>g[max];
bool visited[max];
int D[max];
int cnt=0;
int main()
{
//int distance[max];

    int u,v,w, siz, edge,vertex, start;
    printf("Enter number of vertex \n");
    cin>>vertex;
    printf("Enter number of Edge \n");
    cin>>edge;
    //srand(NULL);
    for(int i=0; i<edge ; i++)
    {
       cin>>u>>v>>w;
//      cin>>u>>v;
//       w=1+rand()%10;

        g[u].pb(pii(v,w));
        g[v].pb(pii(u,w));
    }
    //  cout<<endl;

    printf("Enter Starting node \n");
    cin>>start;
    int i,j;
    for(i=1; i<=vertex; i++)
        D[i]=inf;
    D[start]=0;
    par[start]=0;

    q.push(pii(start, 0));

    while(!q.empty())
    {
        u=q.top().first;
        //    cout<<"U=  q.top().first = "<<u<<endl;
        q.pop();
        //   cout<<"visited[u]  "<<visited[u]<<endl;
        if(visited[u]) continue;
        ///if(visited[u]==true) continue;

        siz=g[u].size();
        //  cout<<"Size "<<siz<<endl;
        //  cout<<"visited[u]  "<<visited[u]<<endl;
        for(int i=0; i<siz; i++)
        {
            v=g[u][i].first;
            //  cout<<"u ="<<u<<" "<<"i ="<<i<<endl;
            // cout<<"v= g[u][i].first "<<v<<endl ;
            w=g[u][i].second;
            //   cout<<"w= g[u][i].second "<<w<<endl;
            //cout<<endl;

            //   cout<<"Before V="<<v<<" "<<"distance(u + w) = ("<<D[u]<<"  + "<<w<<" ) ="<<"d[v]  "<<D[v]<<endl;
            if(!visited[v] && D[u]+w<D[v])
            {
                par[v]=u;
                D[v]=D[u]+w;
                //  cout<<"After V="<<v<<" "<<"distance(u + w) = ("<<D[u]<<"  + "<<w<<" )= "<<"d[v]  "<<D[v]<<endl;
                cnt++;
                //cout<<endl;
                q.push(pii(v,D[v]));
            }
        }
        visited[u]=1;
    }
    cout<<"source"<<"----"<<"Distribution "<<"----"<<"weight "<<" ----  Visited vertex"<<endl;
    for(int i=1; i<=vertex; i++)
    {
        cout<<"  "<<i<<"            "<<par[i]<<"              "<<D[i]<<"              ("<<par[i]<<" , "<<i<<")"<<endl;
       // cout<<"Node ="<<i<<" "<<"parent   "<<par[i]<<" "<<"Min Weight = "<<D[i]<<" ("<<par[i]<<" , "<<i<<")"<<endl;
    }
    cout<<endl;

    cout<<"Step Update ="<<cnt<<" Time"<<endl;

}


