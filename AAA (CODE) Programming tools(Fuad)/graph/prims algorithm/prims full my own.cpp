

#include<bits/stdc++.h>
using namespace std;

#define PII pair<int,int>


bool vis[100];

vector<PII>v[100];
int prim_min(PII x)
{
    priority_queue< PII, vector<PII> , greater<PII> >pq;
    pq.push(x);

    int min_cost=0;

    while(!pq.empty())
    {
        PII from= pq.top();


        if(vis[from.second]==true)
            continue;

        vis[from.second]=true;
        min_cost+=from.first;
        cout<<"min : "<<min_cost<<endl;

        for(int i=0;i<v[from.second].size();i++){

            PII now=v[from.second][i];

            if(vis[now.second]==false)
                pq.push(now);

        }

    }


    return min_cost;
}

int main()
{
    int nodes, edges, x, y;
    int weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        v[x].push_back(make_pair(weight, y));
        v[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    int start_node;
    cout<<"\n\nEnter the starting node : ";cin>>start_node;
    minimumCost = prim_min(make_pair(0,start_node));
    cout << minimumCost << endl;
    return 0;

    return 0;
}
