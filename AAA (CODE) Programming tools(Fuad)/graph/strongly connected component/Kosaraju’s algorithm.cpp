///for directed graph


#include<bits/stdc++.h>
using namespace std;
vector<int>vec[100];
vector<int>tran[100];
stack<int>stk;
bool vis[100];


void dfs(int s,int pass)
{
    vis[s]=true;

    vector<int>tem;
    if(pass==1)
        tem=vec[s];
    else
        tem=tran[s];

    for(int i=0;i<tem.size();i++){
        if(vis[ tem[i] ]==false)
            dfs(tem[i],pass);
    }
    if(pass==1)
      stk.push(s);

}

int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    int from,to;
    for(int i=0;i<n_edge;i++)
    {
        cin>>from>>to;
        vec[from].push_back(to);
        tran[to].push_back(from);
    }
    for(int i=1;i<=n_node;i++)
    {
        if(vis[i]==false)
             dfs(i,1);

    }

//    while(!stk.empty())
//    {
//        cout<<"y : "<<stk.top()<<endl;
//        stk.pop();
//
//    }
    int n_component=0;
    fill(vis,vis+n_node,false);

    cout<<"\n\n\n\n"<<endl;
    while(stk.empty()==false)
    {
        int now=stk.top();
        cout<<" s "<<now<<endl;
        if(vis[now]==false){
            cout<<"called for : "<<now<<endl;
            dfs(now,2);
            n_component++;
        }
        stk.pop();

    }
    cout<<n_component<<endl;

    return 0;
}
