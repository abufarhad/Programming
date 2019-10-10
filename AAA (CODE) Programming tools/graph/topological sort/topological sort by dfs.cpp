#include<bits/stdc++.h>
using namespace std;
bool vis_node[100];
stack<int>stk;
vector<int>v[100];

void topological_sort(int source)
{
    vis_node[source]=true;

    for(int i=0;i<v[source].size();i++){

        if(vis_node[v[source][i]]==false)
            topological_sort(v[source][i]);
    }
    //cout<<source<<endl;
    stk.push(source);
}


int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    ///from -> to
    int from,to;
    for(int i=0;i<n_edge;i++){
        cin>>from>>to;
        v[from].push_back(to);
    }

    for(int i=1;i<=n_node;i++)
        if(vis_node[i]==false)
        topological_sort(i);

    cout<<"after topological sort : "<<endl;
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}
