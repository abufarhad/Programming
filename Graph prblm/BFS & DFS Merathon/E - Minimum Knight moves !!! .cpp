#include<bits/stdc++.h>
using namespace std;

int x[10]= {0,-1,-1,1,1,-2,-2,2,2};
int y[10]= {0,-2,2,-2,2,-1,1,-1,1};

int bfs(int a1,int b1, int a2, int b2)
{
    int moves[10][10], visit[10][10], m,n;

    pair<int,int>p;
    queue< pair<int,int> > q;
    memset(moves, 0, sizeof moves);
    memset(visit, 0, sizeof visit);

    p.first=a1;
    p.second=b1;
    q.push(p);

    visit[a1][b1]=0;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        if(p.first==a2&&p.second==b2) return moves[a2][b2];

        for(int i=1; i<=8; i++)
        {
            m=p.first+x[i];
            n=p.second+y[i];
            if(m>8||m<1||n>8|| n<1) continue;
            else
            {
                visit[m][n]=1 ;
                moves[m][n]=moves[p.first][p.second]+1;
                q.push(make_pair(m,n));
            }
        }
    }
}

int main()
{
    int t,m,n,a1,b1;
    char a ,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>a1>>b>>b1;
        cout<<bfs(a-'a'+1,a1,b-'a'+1,b1)<<endl ;
    }

}
