#include<bits/stdc++.h>
using namespace std;


vector<int>v[100];

bool vis[100];

int j=0;

int vis_time[100];
 void dfs(int s)
 {
     vis[s]=true;

     for(int i=0;i<v[s].size();i++)
     {
         int now=v[s][i];

         if(vis[now]==false)
            dfs(now);
     }

     vis_time[s]=++j;
     return ;

 }
int main()
{
    int node,edge;


    cin>>node>>edge;

    int to,from;
    for(int i=1;i<=edge;i++)
    {
        cin>>to>>from;

        v[to].push_back(from);
        v[from].push_back(to);
    }
    cout<<"source : ";
    int source;

    cin>>source;

    dfs(source);

    for(int i=1;i<=node;i++)
    {
        cout<<"visited time of node "<<i<<" : "<<vis_time[i]<<endl;
    }

    //component

//    int com=0;
//    for(int i=1;i<=node;i++)
//    {
//       if(vis[i]==false)
//       {
//           dfs(i);
//           com++;
//       }
//    }
//    cout<<"no of component : "<<com<<endl;7
    return 0;
}
