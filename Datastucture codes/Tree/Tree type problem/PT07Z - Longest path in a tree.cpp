#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int >node[10000];

int q=0,m=-1;

int dfs(int n,int cnt,vector<bool>&v)
{
    v[n]=true;
    int i;
    for(i=0; i<node[n].size(); i++)
    {
        int nd=node[n][i];
        if(!v[nd])
        {
            dfs(nd ,cnt+1,v);
        }
    }
    if(cnt>m)
    {
        m=cnt;
        q=n;
    }
}


int main()
{
    int ver,e,i,j,n;
    cin>>n;
    vector<bool>v(n);
    vector<bool>visit(n);
    for(i=0; i<n-1; i++)
    {
        cin>>ver>>e;
        ver--,e--;
        node[ver].pb(e);
        node[e].pb(ver);
    }
    dfs(0,0,visit);

    //cout<<q<<" "<<m<<endl;

    m=-1;
    dfs(q,0,v);
    cout<<m<<endl;
}


