//#include<bits/stdc++.h>
//using namespace std;
//#define MAX 30000
//vector<int>nd[MAX], cost[MAX];
//int  visit[MAX];
//int dis[MAX], dis1[MAX], max_dis, a,b,u,n,i;
//
////void bfs(int s)
////{
////    dis[s]=0;
////    queue<int>q;
////    q.push(s);
////    while(!q.empty())
////    {
////        int f=q.front();
////        q.pop();
////        if(dis[f]>max_dis)
////        {
////            max_dis=dis[f];
////            x=f;
////        }
////        for(i=0; i<nd[f].size(); i++)
////        {
////            u=nd[f][i];
////            if(dis[u]==-1)
////            {
////                dis[u]=dis[f]+cost[f][i];
////                q.push(u);
////            }
////        }
////    }
////}
////
////void bfs1(int s)
////{
////    dis1[s]=0;
////    queue<int>q;
////    q.push(s);
////    while(!q.empty())
////    {
////        int f=q.front();
////        q.pop();
////
////        for(i=0; i<nd[f].size(); i++)
////        {
////            u=nd[f][i];
////            if(dis1[u]==-1)
////            {
////                dis1[u]=dis1[f]+cost[f][i];
////                q.push(u);
////            }
////        }
////    }
////}
//
//
//
//void bfs(int src)
//{
//    dis[src]=0;
//    queue<int>Q;
//    Q.push(src);
//    while(!Q.empty())
//    {
//        int f= Q.front();
//        Q.pop();
//        if(dis[f]>max_dis)
//        {
//            max_dis=dis[f];
//            a=f;
//        }
//        //  loop(i,SZ(graph[u]))
//        for(int i=0; i<nd[f].size(); i++)
//        {
//            int v=nd[f][i];
//            if(dis[v]==-1)
//            {
//                dis[v]=dis[f]+cost[f][i];
//                Q.push(v);
//            }
//        }
//    }
//}
//
//void bfs1(int src)
//{
//    dis1[src]=0;
//    queue<int>Q;
//    Q.push(src);
//    while(!Q.empty())
//    {
//        int f= Q.front();
//        Q.pop();
//        // loop(i,SZ(graph[u]))
//        for(int i=0; i<nd[f].size(); i++)
//        {
//            int v=nd[f][i];
//            if(dis1[v]==-1)
//            {
//                dis1[v]=dis1[f]+cost[f][i];
//                Q.push(v);
//            }
//        }
//    }
//}
//
//void allclear( )
//{
//    for( i=0; i<n; i++)
//    {
//        nd[i].clear();
//        cost[i].clear();
//        dis[i]=-1;
//        dis1[i]=-1;
//    }
//    max_dis=-1, a=b=-1;
//}
//
//int main()
//{
//    int x,y,t,w;
//    cin>>t;
//    for(int j=1; j<=t; j++)
//    {
//        allclear();
//        cin>>n;
//        for(i=0; i<n-1; i++)
//        {
//            cin>>x>>y>>w;
//            nd[x].push_back(y);
//            nd[y].push_back(x);
//            cost[x].push_back(w);
//            cost[y].push_back(w);
//        }
//        bfs(0);
//        b=a;
//        for(i=0; i<n+1; i++)
//        {
//            dis[i]=-1;
//            max_dis=-1;
//        }
//        bfs(b);
//     b=a;
//        bfs1(b);
//
//        printf("Case %d: \n",j);
//        for(i=0; i<n; i++)
//        {
//            printf("%d\n", max(dis[i], dis1[i] ));
//        }
//    }
//    return 0;
//}

#include <bits/stdc++.h>

#define pii             pair <int,int>
#define sc              scanf
#define pf              printf
#define Pi              2*acos(0.0)
#define ms(a,b)         memset(a, b, sizeof(a))
#define pb(a)           push_back(a)
#define MP              make_pair
#define db              double
#define ll              long long
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define D(x)            cout<<#x " = "<<(x)<<endl
#define VI              vector <int>
#define DBG             pf("Hi\n")
#define MOD             100007
#define MAX             30001
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define SZ(a)           (int)a.size()
#define sf(a)           scanf("%d",&a)
#define sff(a,b)        scanf("%d%d",&a,&b)
#define sfff(a,b,c)     scanf("%d%d%d",&a,&b,&c)
#define loop(i,n)       for(int i=0;i<n;i++)
#define REP(i,a,b)      for(int i=a;i<b;i++)
#define TEST_CASE(t)    for(int z=1;z<=t;z++)
#define PRINT_CASE      printf("Case %d:\n",z)
#define all(a)          a.begin(),a.end()
#define intlim          2147483648
#define inf             1000000
#define ull             unsigned long long


using namespace std;

vector<int> graph[MAX],cost[MAX];

int dis[MAX];
int dis1[MAX];
int a,b,max_dis,n;

void BFS(int src)
{
    dis[src]=0;
    queue<int>Q;
    Q.push(src);
    while(!Q.empty())
    {
        int f= Q.front();
        Q.pop();
        if(dis[f]>max_dis)
        {
            max_dis=dis[f];
            a=f;
        }
        //  loop(i,SZ(graph[u]))
        for(int i=0; i<graph[f].size(); i++)
        {
            int v=graph[f][i];
            if(dis[v]==-1)
            {
                dis[v]=dis[f]+cost[f][i];
                Q.push(v);
            }
        }
    }
}

void BFS1(int src)
{
    dis1[src]=0;
    queue<int>Q;
    Q.push(src);
    while(!Q.empty())
    {
        int f= Q.front();
        Q.pop();
        // loop(i,SZ(graph[u]))
        for(int i=0; i<graph[f].size(); i++)
        {
            int v=graph[f][i];
            if(dis1[v]==-1)
            {
                dis1[v]=dis1[f]+cost[f][i];
                Q.push(v);
            }
        }
    }
}

void allclear()
{
    loop(i,n)
    {
        graph[i].clear();
        cost[i].clear();
        dis[i]=-1;
        dis1[i]=-1;
    }
    max_dis=-1;
    a=b=-1;
}

int main()
{
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    int t,x,y,w;
    sf(t);

    TEST_CASE(t)
    {
        sf(n);
        allclear();
        loop(i,n-1)
        {
            sfff(x,y,w);
            graph[x].pb(y);
            graph[y].pb(x);
            cost[x].pb(w);
            cost[y].pb(w);
        }
        BFS(0);
        b=a;
        loop(i,n)
        {
            dis[i]=-1;
            max_dis=-1;
        }
        BFS(b);
        b=a;
        BFS1(b);
        PRINT_CASE;
        loop(i,n)
        {
            pf("%d\n",max(dis[i],dis1[i]));
        }
    }
    return 0;
}

