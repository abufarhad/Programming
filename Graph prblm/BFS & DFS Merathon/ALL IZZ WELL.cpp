//#include<bits/stdc++.h>
#include<stdio.h>
char map[110][110];
int  visit[110][110];

int m,n,r,c,cheak;
char a []="ALLIZZWELL";
int x[10]= {0,0,1,-1,1,-1,1,-1};
int y[10]= {1,-1,0,0,1,-1,-1,1};

void dfs(int m, int n, int cnt)
{
    int i,j;
    if(cnt==10)
    {
        cheak=1;
        return ;
    }
    visit[m][n]=1;
    for( i=0; i<8; i++)
    {
        int   tempx=m+x[i];
        int    tempy=n+y[i];
        if(tempx>=0&&tempx<r&&tempy>=0&&tempy<c&&map  [tempx][tempy]==a[cnt]&& visit[tempx][tempy] == 0)
        {
            dfs(tempx,tempy,cnt+1);
            if(cheak==1)
            {
                break;
            }
        }
    }
visit[m][n]=0;
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&r,&c);
        for(i=0; i<r; i++)
        {
           scanf("%s",map[i]);
        }
        cheak=0;
        for(i=0; i<r; i++)
        {
            for( j=0; j<c; j++)
            {
                if(map[i][j]=='A')
                {
                    dfs(i,j,1);
                }
            }
        }
        if(cheak==0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
