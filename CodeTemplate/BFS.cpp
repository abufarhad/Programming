
vector<ll>graph[10000];
bool  visited[10000];

void   bfs(ll node)
{

    q.push(node);


    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        visited[u]=true;

        for(int i=0; i<graph[u].size(); i++)
        {

            ll int v=graph[u][i];
            if(!visited[v])
            {
                q.push(v);

                visited[v]=true;


            }

        }

    }
}





