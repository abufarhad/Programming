#include<bits/stdc++.h>
using namespace std;
vector<int>node[1000];
bool visited[1000];
int bfs()
{
    queue <int> que;
    int start;
    printf("Enter starting node :\n");
    cin>>start;
    que.push(start);
    visited[start]=true;
    cout<<"BFS Traversal ..... "<<endl;
    while(!que.empty())
    {
        int front=que.front();
        cout<<front<<" ";
        que.pop();
        for(vector<int>::iterator it=node[front].begin(); it!=node[front].end(); it++)
        {
            if(visited[*it]==false)
            {
                visited[*it]=true;
                que.push(*it );
            }
        }
    }
}
int main()
{
    int vertex, edge,i,a,b;
    printf("Enter number of vertex :\n");
    cin>>vertex;
    printf("Enter number of edge :\n");
    cin>>edge;

    printf("Enter number of edge from where to where :\n");
    for(i=0; i<edge; i++)
    {
        cin>>a>>b;
        node[a].push_back(b);
        node[b].push_back(a);
    }


    for(i=1; i<1000; i++)
    {
        if(!node[i].empty())
        {
            cout<<"["<<i<<" ]"<<"---->";
            //cout<<i+1<<endl;
            for(vector<int>::iterator it=node[i].begin(); it!=node[i].end(); it++)
            {
                cout<<*it<<"--->";
            }
            cout<<"NULL"<<endl;
        }
    }
    bfs();

    return 0;
}


