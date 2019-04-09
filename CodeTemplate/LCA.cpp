
ll int lavel[limit];
ll  pr[limit];

ll  par[limit][20];
typedef pair<ll,ll>iPair;

queue<ll >q;
bool visited[limit];
vector<iPair>graph[limit];
ll int dis[limit+6];




void   bfs(int node)
{

    q.push(node);
    lavel[node]=0;
    pr[node]=-1;
    dis[node]=0;


    while(!q.empty())
    {



        //cout<<"ii\n";
        int u=q.front();
        cout<<u<<endl;
        q.pop();

        visited[u]=true;

        for(int i=0; i<graph[u].size(); i++)
        {


            ll int v=graph[u][i].ff;
            ll int cost=graph[u][i].ss;
            if(!visited[v])
            {
                dis[v]=dis[u]+cost;

                //cout<<"ii\n";
                pr[v]=u;
                lavel[v]=lavel[u]+1;

                q.push(v);

                visited[v]=true;


            }

        }

    }
}
void sparse_table(ll n)
{

    bfs(1);

    for(int i=1; i<=n; i++)
    {



        par[i][0]=pr[i];


    }


    for(int i=1; (1<<i)<=n; i++)
    {

        for(int k=1; k<=n; k++)
        {
            if(par[k][i-1]!=-1)
                par[k][i]=par[par[k][i-1]][i-1];
            else
            {


                par[k][i]=-1;
            }

        }




    }



}

ll  LCA(int u,int v,int n)
{

    ll int x=0;
    while((1<<x)<=n)
    {




        x++;

    }
    x--;

    if(lavel[u]>lavel[v])
    {



        for(int i=x; i>=0; i--)
        {

            if(lavel[u]-(1<<i)>=lavel[v])
            {

                u=par[u][i];
            }

        }


    }


    else
    {


        for(int i=x; i>=0; i--)
        {

            if(lavel[v]-(1<<i)>=lavel[u])
            {

                v=par[v][i];
            }

        }



    }


    for(int i=x; i>=0; i--)
    {


        if(par[u][i]!=-1&&par[u][i]!=par[v][i])
        {

            u=par[u][i];
            v=par[v][i];


        }

    }


    return pr[u];


}
ll  LCA1(int u,int v,int n)
{

    ll int x=0;
    while((1<<x)<=n)
    {




        x++;

    }
    x--;

    if(lavel[u]>lavel[v])
    {



        for(int i=x; i>=0; i--)
        {

            if(lavel[u]-(1<<i)>=lavel[v])
            {

                u=par[u][i];
            }

        }


    }


    else
    {


        for(int i=x; i>=0; i--)
        {

            if(lavel[v]-(1<<i)>=lavel[u])
            {

                v=par[v][i];
            }

        }



    }
    ll  dis1=0;

    for(int i=x; i>=0; i--)
    {


        if(par[u][i]!=-1&&par[u][i]!=par[v][i])
        {

            u=par[u][i];
            v=par[v][i];
            dis1+=(ll)1<<i;


        }
        dis1++;

    }


    return pr[u];


}



int main()
{

    ll int a,b,p,q,r,s,n,m,x,y,sum,test,ans,mx,mn;
    int cnt,z,c;
    bool ys,no;

    string  A,B;
    while(cin>>n)
    {

        for(int i=1; i<n; i++)
        {
            sl3(a,b,c);
            graph[a].pb(mkpr(b,c));
            graph[b].pb(mkpr(a,c));




        }


        sparse_table(n);

        while(q--)
        {
            scanf("%s",A);
            if(A=="DIST")
            {




                sl2(a,b);

                ll int p=LCA(a,b,n);


                cout<<dis[b]+dis[a]-2*dis[p];
            }
            if(A=="KTH")
            {
                sl3(a,b,c);






            }


//cout<<LCA(a,b,n)<<endl;





        }


//cout<<tune<<endl;


    }

    //f
}


