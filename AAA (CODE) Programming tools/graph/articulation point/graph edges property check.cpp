#include<bits/stdc++.h>
using namespace std;


vector<int>v[100];
int vis[100];
int parent[100];

void dfs(int s)
{
    vis[s]=1;

    for(int i =0;i<v[s].size();i++)
    {
        int now=v[s][i];
        if(vis[now]==0)
        {
            parent[now]=s;
            dfs(now);

        }
        else if(vis[now]==1)
        {
            if(parent[s]==now)
                cout<<"two ways : "<<"( "<<now<<" -> "<<s<<" )  -  "<<"( "<<s<<" -> "<<now<<" ) "<<endl;
            else
                cout<<"Back edge : "<<"( "<<now<<" -> "<<s<<" )    Cycle  "<<endl;

        }
        else if(vis[now]==2)
             cout<<"forward/cross edge : "<<"( "<<now<<" -> "<<s<<" )"<<endl;
    }
    vis[s]=2;
}
int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    int from,to;

    for(int i=0;i<n_edge;i++)
    {
        cin>>from>>to;

        v[from].push_back(to);
        v[to].push_back(from);
    }


    int com_counter=1;
    for(int i=0;i<n_node;i++)
    {
        if(vis[i]==false){
           cout<<"\n\n\nComponent no : "<<com_counter<<endl;
            dfs(i);
            com_counter++;


        }

    }

    return 0;
}
