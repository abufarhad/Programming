ll dfs( ll n )
{
    //cout<<n<<endl;
    vis[n]=1;
    fr(i, g[n].size())if(!vis[ g[n][i]  ] )
        dfs(g[n][i] );
}
