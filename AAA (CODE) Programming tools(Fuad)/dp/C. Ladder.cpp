


#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)          for(i=a;i<b;i++)
#define repr(i,a,b)         for(i=a;i>=b;i--)

#define LL                  long long
#define ull                 unsigned long long int
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64d ",n)
#define pfs(s)              printf("%s\n",s)

#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 100005


int in[N]; /// in[i] denotes the starting position of the increasing seq. till ith
int de[N]; /// de[i] denotes the starting position of the decreasing seq. till ith

int main()
{

    int n,m;
    scii(n,m);

    int arr[n+1];


    for(int i=1;i<=n;i++)
        sci(arr[i]);

    in[1]=1;

    for(int i=2;i<=n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            in[i]=in[i-1];
        }
        else
        {
            in[i]=i;
        }
    }


    //for(int i=1;i<=n;i++) cout<<in[i]<<" "; cout<<endl;

    de[1]=1;

    for(int i=2;i<=n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            de[i]=de[i-1];
        }
        else
            de[i]=i;

    }

    // for(int i=1;i<=n;i++) cout<<de[i]<<" ";cout<<endl;


     while(m--)
     {
         int a,b;
         scii(a,b);

         if(in[b]<=a)
            cout<<"Yes"<<endl;
         else if(de[b]<=a)
            cout<<"Yes"<<endl;
         else if( in[  de[b]  ]<=a )
            cout<<"Yes"<<endl;
         else
            cout<<"No"<<endl;

     }

    return 0;
}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
