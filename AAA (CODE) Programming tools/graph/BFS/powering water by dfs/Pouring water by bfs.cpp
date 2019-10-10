


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
#define bug1		        printf("bug1")
#define	bug2			    printf("bug2")
#define	bug3		        printf("bug3")

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

#define N 1005



int bfs(int a,int b,int t)
{
    map<pp,bool>Map;
    map<pp,pp>par;
    map<pp,int>level;
    queue<pp>q;


    q.push({0,0});
    level[ {a,b} ]=0;
    par[ {a,b} ]={a,b};


    while(q.size())
    {
        pp now=q.front();
        cout<<now.first<<" --- "<<now.second<<endl;

        q.pop();

        if(Map[ {now.first,now.second} ]==true || now.first<0 || now.first>a || now.second<0 || now.second>b)
            continue;

        Map[ {now.first,now.second} ]=true;

        cout<<now.first<<" "<<now.second<<endl;
        if(now.first==t || now.second==t)
        {
            cout<<"paise  "<<level[now]<<endl;
            return level[ now ];
        }

        if( Map[ {a,0} ]==false )
        {
             q.push( {a,0} );
             level[ {a,0} ]=level[now]+1;
        }

        if( Map[ {0,b} ]==false )
        {
             q.push( {0,b} );
             level[ {0,b} ]=level[now]+1;
        }

        ///a to b
        if(Map[ mp(now.first-min(b-now.second,now.first)   ,now.second+min(b-now.second,now.first))  ]==false)
        {
            q.push( mp(now.first-min(b-now.second,now.first)   ,now.second+min(b-now.second,now.first)) );
            level[ mp(now.first-min(b-now.second,now.first)   ,now.second+min(b-now.second,now.first))  ]=level[now]+1;

        }

        ///b to a
        if(Map[ mp(now.first+min(a-now.first,now.second)   ,now.second-min(a-now.first,now.second))  ]==false) ///b to a
        {
            q.push( mp(now.first+min(a-now.first,now.second)   ,now.second-min(a-now.first,now.second)) );
            level[ mp(now.first+min(a-now.first,now.second)   ,now.second-min(a-now.first,now.second)) ]=level[now]+1;
        }


        if(Map[ mp(now.first,b)   ]==false)
        {
            q.push( mp(now.first,b)) ;
            level[ mp(now.first,b) ]=level[now]+1;
        }

         if(Map[ mp(a,now.second)   ]==false)
        {
            q.push( mp(a,now.second)) ;
            level[ mp(a,now.second) ]=level[now]+1;
        }

        if(Map[ mp(now.first,0)   ]==false)
        {
            q.push( mp(now.first,0)) ;
            level[ mp(now.first,0) ]=level[now]+1;
        }

         if(Map[ mp(0,now.second)   ]==false)
        {
            q.push( mp(0,now.second)) ;
            level[ mp(0,now.second) ]=level[now]+1;
        }


    }

    return -1;

}


int main()
{

    int a,b,c;
    sciii(a,b,c);

    int gcd=__gcd(a,b);


    if(c%gcd==0)
    {
        int res=bfs(a,b,c);
        cout<<res<<endl;
    }
    else
    {
      cout<<"-1"<<endl;
    }


    return 0;

}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
