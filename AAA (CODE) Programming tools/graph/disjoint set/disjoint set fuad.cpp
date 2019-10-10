#include<bits/stdc++.h>
using namespace std;

int par[100005];

int find_par(int x)
{
    if(par[x]==x)
        return x;
    par[x]=find_par(par[x] );

    return par[x];
}
int main()
{
    int n,m;
    cin>>n>>m;
    int val[n+1];
    for(int i=1;i<=n;i++)
        cin>>val[i];
    for(int i=1;i<=n;i++)
        par[i]=i;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        int p_a=find_par(a);
        int p_b=find_par(b);

        if(p_a!=p_b)
        {
            if(val[p_a]<val[p_b])
                par[p_b]=p_a;
            else
                par[p_a]=p_b;
        }
    }
    long long res=0;
    for(int i=1;i<=n;i++)
    {
        if(find_par(i)==i)
            res+=val[i];
    }
    cout<<res<<endl;
}
