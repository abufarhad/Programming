vector<iPair>graph[100001];
priority_queue<iPair,vector<iPair>,greater<iPair>>pq;
ll dis[100001];

void  diakstra(ll node)
{
    pq.push(make_pair(0,node));
    dis[node]=0;

    while(!pq.empty())
    {

        ll u=pq.top().second;
        pq.pop();

        for(ll i=0; i<graph[u].size(); i++)
        {

            ll v=g[u][i].first;
            ll cost=graph[u][i].second;
            if(dis[v]>dis[u]+cost)
            {

                dis[v]=dis[u]+cost;
                pq.push(dis[v],v);
            }
        }



    }


}
