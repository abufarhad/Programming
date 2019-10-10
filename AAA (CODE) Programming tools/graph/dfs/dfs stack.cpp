#include<bits/stdc++.h>
using namespace std;


vector<int>v[100];

bool vis[100];

int j=0;

int vis_time[100];

stack<int>vt;
 void dfs(int s)
 {
     stack<int>st;

     st.push(s);


     while(!st.empty())
     {
         int now=st.top();
         st.pop();
         vis[now]=true;
         vt.push(now);
         for(int i=0;i<v[now].size();i++)
         {
             int to=v[now][i];
             if(vis[to]==false)
             {
                 st.push(to);
             }
         }



     }
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

    dfs(source);//    ///component

    while(!vt.empty())
    {
        cout<<vt.top()<<endl;
        vt.pop();
    }
//
//    int com=0;
//    for(int i=1;i<=node;i++)
//    {
//       if(vis[i]==false)
//       {
//           dfs(i);
//           com++;
//       }
//    }
//    cout<<"no of component : "<<com<<endl;

//
//    for(int i=1;i<=node;i++)
//    {
//        cout<<"visited time of node "<<i<<" : "<<vis_time[i]<<endl;
//    }

    return 0;
}
