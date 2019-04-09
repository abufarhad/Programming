#include <cstdio>
#include <algorithm>
#include <cstring>


char g[110][110];
bool  visit[110][110];

int m,n,r,c,cnt;

//int x[10]= {0,0,1,-1,1,-1,1,-1};
//int y[10]= {1,-1,0,0,1,-1,-1,1};
/// or,
int x[10]= {0,0,1,-1};
int y[10]= {1,-1,0,0};

int dfs(int m, int n)
{
    int i,j;

    for( i=0; i<4; i++)
    {
        int   tempx=m+x[i];
        int    tempy=n+y[i];
        if(tempx>=0&&tempx<r&&tempy>=0&&tempy<c&& g [tempx][tempy] =='.' && visit[tempx][tempy] == 0)
        {
            visit[tempx][tempy]=1;
            cnt++;
            dfs(tempx,tempy);

        }
    }
    return cnt;
}
int main()
{
    int t,i,m,j,a,b;
    scanf("%d",&t);
    for(m=1; m<=t; m++)
    {
        scanf("%d %d",&c,&r);
        memset(visit, 0, sizeof(visit));
        for(i=0; i<r; i++)
        {
            scanf("%s",g[i]);
        }
        /// for input we also take
        ///getchar()   only

        for(i=0; i<r; i++)
        {
            for( j=0; j<c; j++)
            {
               // g[i][j]=getchar();
                if(g[i][j]=='@')
                {
                    a=i, b=j;
                    visit[a][b]=1;
                }
            }
            //getchar();
        }


        cnt=1;
        dfs(a,b);
        printf("Case %d: %d\n",m,cnt);
    }
    return 0;
}
