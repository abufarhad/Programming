#include<bits/stdc++.h>
using namespace std;

int par[20];
struct edge{
    int weight,from,to;
};
bool comp(edge a, edge b){
    if(a.weight < b.weight)
        return true;
    return false;
}
int find_parent(int x){
    if(par[x]==x)
        return x;
    return par[x]=find_parent(par[x]);
}
int main()
{
    freopen("input.txt","r",stdin);
    int n_nodes,n_edge,i,counter=0;
    cin>>n_nodes>>n_edge;
    edge edges[n_edge];

    for(int i=0;i<n_edge;i++){
        cin>>edges[i].from>>edges[i].to>>edges[i].weight;
        par[i]=i;
    }
    sort(edges, edges+n_edge,comp);
    for(i=0;i<n_edge;i++){
        int par_x,par_y;
        par_x=find_parent(edges[i].from);
        par_y=find_parent(edges[i].to);
        if(par_x!=par_y){
            par[par_x]=par_y;
            counter+=edges[i].weight;
        }
    }
    cout<<counter;

}
