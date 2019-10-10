#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

char mp[105][105];
char s[]="ALLIZZWELL";
ll vis[105][105];
ll check,row, clm;

int x[10]= {0,0,1,-1,1,-1,1,-1};
int y[10]= {1,-1,0,0,1,-1,-1,1};


void dfs( ll r,ll c, ll cnt )
{
    if(cnt==10){check=1; return; }

    vis[r][c]=1;
    fr(i,8)
    {
        ll tmpx=r+x[i];
        ll tmpy=c+y[i];

        if(tmpx>=0 && tmpx<row && tmpy>=0 && tmpy<clm && mp [tmpx][tmpy]==s[cnt] && vis[tmpx][tmpy]==0)
        {
            dfs(tmpx, tmpy, cnt+1);
            if(check==1)break;
        }
    }
    vis[r][c]=0;
}

int main()
{
    ll m,n,i,k,l,t,r,cnt=0,a,b,c;

       cin>>t;
       while(t--)
       {
           cin>>row>>clm;
         // fr(i,row) scanf("%s",mp[i]);
        fr(i,row)fr(j,clm) cin>>mp[i][j];

        check=0;

        fr(i,row)fr(j,clm) if(mp[i][j]=='A') dfs(i,j,1);

        if(check==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

       }

}
