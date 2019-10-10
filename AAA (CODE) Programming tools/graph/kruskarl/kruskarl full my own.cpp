
#include<bits/stdc++.h>
using namespace std;
int par[100];
struct edge{

    int from;
    int to;
    int weight;

};

bool cmp(edge a,edge b)
{
    return a.weight<b.weight;
}


int find_parent(int x)
{
    if(par[x]==x)
        return x;

    find_parent(par[x]);

}


int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    edge ed[n_edge];

    int from,to,weight;
    for(int i=0;i<n_edge;i++)
        cin>>ed[i].from>>ed[i].to>>ed[i].weight;




    sort(ed,ed+n_edge,cmp);

    cout<<"\n\nAfter sorting the edges are in the following order :"<<endl;
    for(int i=0;i<n_edge;i++)
        cout<<"\t"<<ed[i].from<<" -> "<<ed[i].to<<" ( "<<ed[i].weight<<" )"<<endl;



    for(int i=1;i<=n_node;i++)
        par[i]=i;



    cout<<"\n\nEdges in minimum spanning tree are :"<<endl;
    int cost=0;
    for(int i=0;i<n_edge;i++)
    {
        int par_a=find_parent(ed[i].from);
        int par_b=find_parent(ed[i].to);

        if(par_a!=par_b)
        {
            par[par_b]=par_a;

            cost+=ed[i].weight;

            cout<<"\t"<<ed[i].from<<" -> "<<ed[i].to<<" ( "<<ed[i].weight<<" )"<<endl;
        }
    }

    cout<<"\n\nTotal cost to build the minimum spanning tree "<<cost<<endl;

    return 0;
}
