#include<bits/stdc++.h>
using namespace std;


vector< pair<int,int> >v[100];
bool vis[1000];
int dist[100];

int path[100];
void dikstra(int w,int node )
{
    priority_queue< pair<int,int>, vector< pair<int,int> >,greater< pair<int,int> > >pq;
    pq.push(make_pair(w,node));

    dist[node]=0;
    path[node]=0;

    while(!pq.empty()){
        pair<int,int>fr;
        fr=pq.top();
        pq.pop();

        for(int i=0;i<v[ fr.second ].size();i++){

            pair<int,int>to;

            to=v[ fr.second ][i];

            if(dist[fr.second] + to.first<dist[to.second])
            {
                dist[to.second]=dist[fr.second]+to.first;

                pq.push(make_pair(dist[to.second],to.second));
                path[to.second]=fr.second;

            }
        }
    }


}


int main()
{
    int n_node,n_edge;
    cin>>n_node>>n_edge;

    int to,from,weight;

    memset(dist,1000000,sizeof(dist));

    for(int i=0;i<n_edge;i++)
    {
        cin>>to>>from>>weight;

        v[from].push_back(make_pair(weight,to));
        v[to].push_back(make_pair(weight,from));
    }
    int refer_node;
    cout<<"\n\n\tEnter reference node : ";cin>>refer_node;

    dikstra(0,refer_node);


    cout<<"\n\n\n\nDistance of every node from the refer node : \n\n";
    for(int i=1;i<=n_node;i++)
        cout<<"\tnode "<<i<<"   dist :"<< dist[i]<<endl;

    cout<<"\n\n\n\nPath for every individual node from the given source : \n"<<endl;
    for(int i=1;i<=n_node;i++){
        cout<<"\tPath for node "<<i<<" :   ";
        vector<int>p;

        int tem=i;
        p.push_back(tem);
        while(path[tem]!=0){

             tem=path[tem];
             p.push_back(tem);
        }

        reverse(p.begin(),p.end());
        for(int i=0;i<p.size();i++)
        {
            if(i+1<p.size())
                cout<<p[i]<<" -> ";
            else
                cout<<p[i]<<endl;
        }
        p.clear();
    }


    return 0;
}
