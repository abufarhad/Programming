///https://www.youtube.com/watch?v=Xng1Od_v6Ug&t=1064s
#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)
#define LL long long
#define ull unsigned long long
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define sci(n) scanf("%d", &n)
#define scii(n,m) scanf("%d %d",&n,&m)
#define sciii(n,m,p) scanf("%d %d %d",&n,&m,&p)
#define scs(n) scanf("%s", n)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define Pi acos(-1.0)
#define N 100005

vector<int>v[N];

int in[N];
int out[N];
void dfs1(int s,int par)
{
    in[s]=0;

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];
        if(now==par)
            continue;
        dfs1(now,s);

        in[s]=max(in[s],1+in[now]);
    }
}


void dfs2(int s,int par)
{

    int mx1=-1,mx2=-1;

    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];
        if(now==par)
            continue;

        if(in[now]>=mx1)
        {
            mx2=mx1;
            mx1=in[now];
        }
        else if(in[now]>mx2)
            mx2=in[now];
    }


    for(int i=0;i<v[s].size();i++)
    {
        int now=v[s][i];

        if(now==par)
            continue;

        int use=mx1;

        if(in[now]==mx1)
            use=mx2;



        out[now]=max(1+out[s],2+use);
        dfs2(now,s);


    }
}

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }

    dfs1(1,0);
    dfs2(1,0);

    for(int i=1;i<=n;i++)
    {
        cout<<"root :"<<i<<"  height : "<<max(in[i],out[i])<<endl;
    }



    return 0;
}
/*
10
1 2
1 3
1 4
2 5
2 6
3 7
4 8
7 9
7 10

*/
