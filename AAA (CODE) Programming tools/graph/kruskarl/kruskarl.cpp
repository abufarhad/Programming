#include<bits/stdc++.h>
using namespace std;

map<char,char>par;
struct edge{

    char from;
    char to;
    int weight;
};


bool compare(edge a,edge b){

    return a.weight<b.weight;
}

char find(char x){

    if(par[x]==x)
        return x;

    par[x]=find(par[x]);
    return par[x];
}

int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    char c='A';
    for(int i=0;i<n_node;i++){
        par[c]=c;
        c++;
    }
    edge ob[n_edge];


    for(int i=0;i<n_edge;i++){
        cin>>ob[i].from>>ob[i].to>>ob[i].weight;
    }
    sort(ob,ob+n_edge,compare);

    cout<<"edges in asending order :"<<endl;
    for(int i=0;i<n_edge;i++){
        cout<<ob[i].weight<<"  ";
    }
    cout<<endl;
    int cost=0;
    cout<<"the edges associated with minimum spanning tree :"<<endl;

    for(int i=0;i<n_edge;i++){
        char par_from=find(ob[i].from);
        char par_to=find(ob[i].to);

        if(par_from!=par_to){
            par[par_to]=par_from;
            cost+=ob[i].weight;
            cout<<ob[i].from<<" --- "<<ob[i].to<<endl;
        }
    }

    cout<<"\n\nthe cost to form min spanning tree is : "<<cost<<endl;

    return 0;
}
