

#include<bits/stdc++.h>
using namespace std;
vector<int>v[50];
bool vis[50];
int level[50];
int p[50];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    int tem;
    level[source]=0;


    while(!q.empty()){
        tem=q.front();
        q.pop();
        for(int i=0;i<v[tem].size();i++){
            int tem2;
            tem2=v[tem][i];
        if(vis[tem2]==false){
            level[tem2]=level[tem]+1;
            p[tem2]=tem;
            vis[tem2]=true;
            q.push(tem2);
            }

        }
    }

}

int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    int t1,t2,i;
    for(i=0;i<n_edge;i++){
        cin>>t1>>t2;
        v[t1].push_back(t2);
        v[t2].push_back(t1);

    }
    int source,dest;
    cin>>source>>dest;

    bfs(source);

    if(vis[dest]==true){
        cout<<"YES"<<" distance :"<<level[dest]<<endl;
        vector<int>path;

        path.push_back(dest);

        int now=dest;
        while(now!=source){
            now=p[now];
            path.push_back(now);
        }

        reverse(path.begin(),path.end());
        cout<<"\n\nshortest path is :\n";
        for(int i=0;i<path.size();i++)
        {
            cout<<path[i]<<"-";
        }


    }
    else
        cout<<"NO"<<endl;
    return 0;
}
