#include<bits/stdc++.h>
using namespace std;
#define MAX              30000
#define ll                    long long
#define  sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define sf(a)               scanf("%d",&a)
#define pf                   printf
#define Pi                    2*acos(0.0)
#define ms(a,b)           memset(a, b, sizeof(a))
#define loop(i,n)           for(int i=0;i<n;i++)
#define REP(i,a,b)        for(int i=a;i<b;i++)
#define test_case(z)    for(int z=1;z<=t;z++)
#define print_case       printf("Case %d:\n",n)
#define pb(a)               push_back(a)

vector<int> nd[1005];
bool visit[1005];
int sum[MAX];

int dfs(int s)
{
    int i,n,u;
    visit[s]=true;
    sum[s]++;
    loop(i,nd[s].size())
    {
        u=nd[s][i];
        if(visit[u]==0)
        {
            dfs(u);  //cout<<"t = "<<u<< " ";
        }
    }
}

void allclear()
{
    for(int i=0; i<1005; i++) nd[i].clear();
    ms(sum, 0);
}

int main()
{
    ll a[MAX],b,m,n,k,i,t,u,v;
    cin>>t;
    for(int f=1; f<=t; f++)
    {
        cin>>k>>n>>m;
        allclear();
        for(i=0; i<k; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>u>>v;
            nd[u].pb(v);
        }
        for(i=0;i<k;i++)
        {
            ms(visit,false);
            dfs(a[i]) ;
        }
        int ans=0;
       for(i=1;i<=n;i++)
        {
            //cout<<i<<"="<<sum[i]<<" ";
            if(sum[i]==k) ans++;
        }
        pf("Case %d: %d\n",f,ans);
    }
}
