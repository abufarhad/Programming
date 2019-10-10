 //bohu diner issa aita shikbo ... ahaa!!!!!!!!!

#include<bits/stdc++.h>
using namespace std;

#define INF 10000000000000000

vector< pair<long long,long long> >vec[1000008];
vector<long long>dist(1000007,INF);
vector<long long>path(1000007);

void Dijkstra(long long source)
{
    priority_queue<pair<long long,long long>,vector< pair<long long,long long> >,greater< pair<long long,long long> > >pq;
    priority_queue<pair<long long,long long>,vector< pair<long long,long long> >,greater< pair<long long,long long> > >re;
    pq.push(make_pair(0,1));
    dist[source]=0;

    while(pq.empty()==false){
        pair<long long,long long>v=pq.top();
        pq.pop();
        for(long long i=0;i<vec[v.second].size();i++){

            pair<long long,long long>w=vec[v.second][i];

            if(dist[v.second]+ w.first < dist[w.second]){
                dist[w.second]=dist[v.second]+ w.first;
                pq.push(make_pair(dist[w.second],w.second));
                path[w.second]=v.second;

            }
        }
    }
}

int main()
{
    long long n_node,n_edge;
    long long from,to,distance;
    cin>>n_node>>n_edge;

    for(long long i=0;i<n_edge;i++)
    {
        cin>>from>>to>>distance;
        vec[from].push_back(make_pair(distance,to));
        vec[to].push_back(make_pair(distance,from));

    }
    Dijkstra(1);
    if(dist[n_node]==INF)
        cout<<-1<<endl;
    else{

    vector<long long>p;
     long long now=n_node;
      p.push_back(now);
        while(now!=1){
            now=path[now];
            p.push_back(now);
        }

       // reverse(p.begin(),p.end());
        //cout<<"\n\nshortest path is :\n";
        for(long long i=p.size()-1;i>=0;i--)
        {
            if(i==0)
                cout<<p[i]<<endl;
            else
                cout<<p[i]<<" ";
        }


    }
    return 0;
}
