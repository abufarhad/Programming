#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")

ll n;
char dest;
//string a[15];
char a[15][15];
ll d[15][15];

bool vis[15][15];
ll dx[]={0,0,1,-1};
ll dy[]={1,-1,0,0};

struct point
{
    ll x,y;
};

point src;

void initt( )
{
    fr(i,15)fr(j,15)vis[i][j]=0, d[i][j]=-1;
}

ll bfs(point s)
{
    initt();
    queue<point >q;
    q.push(s);

    vis[s.x][s.y]=1;
    d[s.x][s.y]=0;

    point u, v;

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        if(a[u.x][u.y]==dest)
        {
            src.x=u.x, src.y=u.y;
            return d[u.x][u.y];
        }

        fr(i,4)
        {
            v.x=u.x+dx[i];
            v.y=u.y+dy[i];

            if(v.x>=0 && v.x<n &&v.y>=0 && v.y<n && vis[v.x][v.y]==0)
            {
                if( (a[v.x][v.y] >dest && dest<='Z' )|| a[v.x][v.y]=='#')
                {
                    continue;
                }
                //cout<<v.x<<" --v-- "<<v.y<<endl;
                //cout<<u.x<<" --u-- "<<u.y<<endl;
                //cout<<d[u.x][u.y]<<endl;
                vis[v.x][v.y]=1;
                d[v.x][v.y]= d[u.x][u.y]+1;
                q.push(v);
            }
        }
    }
    return -1;
}



int main()
{
    ll t,cs=0;
    scl(t);
    while(t--)
    {
        scl(n);
        cs++;

        fr(i,n)fr(j,n)cin>>a[i][j];


        ll cnt=0;
        fr(i,n)
        {
            fr(j,n)
            {
                if(a[i][j]=='A') src.x=i, src.y=j;
                if(isupper(a[i][j])) cnt++;
            }
        }

        //cout<<"cnt "<<cnt<<endl;

        ll res=0, tmp=0;
        dest='B';
        printf("Case %lld: ", cs);

        fr(i,cnt-1)
        {
            tmp = bfs(src);
            cout<<tmp<<endl;
            if(tmp==-1)
            {
                puts("Impossible");
                break;
            }
            else res += tmp;
            dest++;
        }

        if(tmp!=-1)printf("%lld\n", res);
    }
}
