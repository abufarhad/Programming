

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
#define N 300005

///Star graph is a special type of graph in which n-1 vertices have degree 1 and a single vertex have degree n – 1.
///This looks like that n – 1 vertices are connected to a single central vertex.
int arr[100][100];
int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        arr[b][a]=1;
    }


    int one_deg_ver=0,n_1_deg_ver=0;
    for(int i=0;i<n;i++)
    {
        int ver=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
                ver++;
        }
        if(ver==1)
            one_deg_ver++;
        else if(ver==n-1)
            n_1_deg_ver++;
    }

    if(one_deg_ver==n-1 && n_1_deg_ver==1)
        cout<<"star graph"<<endl;
    else
        cout<<"not star graph"<<endl;
    return 0;
}
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
