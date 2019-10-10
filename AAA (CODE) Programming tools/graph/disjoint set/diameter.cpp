#include<bits/stdc++.h>
using namespace std;

int maxheight=-1, maxnode;
vector<int>v[50];

void dfs(int x, int past, int height ){
    if(height>maxheight)
    {
        maxheight=height;
        maxnode=x;
    }
    for(int i=0;i<v[x].size();i++)
        if(v[x][i]!=past)
            dfs(v[x][i],x,height+1);
}

int main()
{
    freopen("input.txt","r",stdin);
    int n_nodes,n_edge,i,counter=0;
    cin>>n_nodes>>n_edge;
    for(int i=0;i<n_edge<i++){
        cin>>from>>to;
        v[from].push_back(to);
        v[to].push_back(from);
    }
    dfs(1,-1,0);
    maxheight=-1;
    dfs(maxnode,-1,0);
    cout<<maxheight;

}
