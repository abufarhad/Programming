#include<bits/stdc++.h>
using namespace std;

vector<char>v[150];
bool vis[150];
int p[150];

void bfs(char source){
    queue<char>Q;
    Q.push(source);
    vis[source-'0']=true;

    path[source]

    while(!Q.empty()){
        char tem1=Q.front();
        Q.pop();

        for(int i=0;i<v[tem1-'0'].size();i++){
            char tem2=v[tem1-'0'][i];

            if(vis[tem2-'0']==false){
                p[tem2-'0']=tem1-'0';
                Q.push(tem2);
                vis[tem2-'0']=true;

            }
        }
    }

}

int main()
{
    int n_node,n_edge;
    cout<<"Enter number of node : ";cin>>n_node;
    cout<<"Enter number of edge : ";cin>>n_edge;

    char t1,t2;

    for(int i=0;i<n_edge;i++){
        cin>>t1>>t2;
        v[t1-'0'].push_back(t2);
        v[t2-'0'].push_back(t1);
    }
    char source,dist;
    cout<<"Enter source node : ";cin>>source;
    cout<<"Enter destination node : ";cin>>dist;

    bfs(source);

    if(vis[dist-'0']==true){
        cout<<"possible to go there ";
        vector<char>path;
        path.push_back(dist);
        int now;
        now=dist-'0';
        while(now!=(source-'0')){

            now=p[now];
            path.push_back(now+'0');
        }
        cout<<"\nthe path is : ";
        reverse(path.begin(),path.end());
        for(int j=0;j<path.size();j++)
            cout<<path[j]<<" - ";
    }
    else
        cout<<"cann't possible to go there ";

    return 0;
}
