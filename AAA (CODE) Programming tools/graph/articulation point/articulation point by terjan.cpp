#include<bits/stdc++.h>
using namespace std;


int parent[100];
int child[100];
int low[100];
int tym[100];
bool seen[100];
bool is_cut[100];


vector< vector<int> >adj(100);

void dfs(int s)
{
    static int c=0;

    seen[s]=true;
    low[s]=tym[s]=c++;

    for(int i=0;i<adj[s].size();i++)
    {
        int curr=adj[s][i];

        if(curr==parent[s])
            continue;

        if(!seen[curr])
        {
            child[s]++;
            parent[curr]=s;
            dfs(curr);

            low[s]=min(low[s] , low[curr]);

            if(low[curr] >= tym[s])
                is_cut[s]=true;

        }
        else{
           low[s]=min(low[s],tym[curr]);
        }
    }

}


int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    parent[1]=-1;
    dfs(1);

    is_cut[1] = child[1]>1 ? true:false;


    for(int i=1;i<=n;i++)
        if(is_cut[i])
            cout<<"Cut vertex : "<<i<<endl;

    return 0;
}



