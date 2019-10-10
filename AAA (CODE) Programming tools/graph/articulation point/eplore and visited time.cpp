 #include<bits/stdc++.h>
 using namespace std;
 int vis[100];
 int explor[100];

 vector<int>v[100];
 int tim=0;
 void dfs(int source)
 {
     explor[source]=++tim;
     for(int i=0;i<v[source].size();i++)
     {
         int now=v[source][i];

         if(explor[now]==0)
         {
            dfs(now);

         }
     }
     vis[source]=++tim;

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
     }

     for(int i=0;i<n_node;i++)
        if(explor[i]==0)
            dfs(i);

     for(int i=0;i<n_node;i++)
        cout<<"node : "<<i<<" : "<<explor[i]<<"\t"<<vis[i]<<endl;

     return 0;
 }
