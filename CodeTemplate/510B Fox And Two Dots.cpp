//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)

char g[55][55];
bool vis[ 55][55], findcycle=0;
ll n,m;
ll dx[4]={0,1,-1,0};
ll dy[4]={1,0,0,-1};

void dfs(ll x,ll y, ll fromX, ll fromY, char needchar )
{

    if(x<0 || x>=n || y <0 || y>=m )return ;

    if(g[x][y] !=needchar ) return ;

    if(vis[x][y] ==1 ){ findcycle=1; return; }

    vis[x][y]=1;
    fr(i,4)
    {
        ll nxtX= x+ dx[i];
        ll nxtY= y+ dy[i];
        if( nxtX==fromX && nxtY==fromY)continue;

        dfs(nxtX, nxtY, x,y,  needchar);
    }
}

int main()
{

    ll t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(m);

      fr(i,n) fr(j,m)  cin>>g[i][j];

      fr(i,n)fr(j,m)if(!vis[i][j] )dfs(i,j,-1,-1, g[i][j] );

      cout<< (findcycle ? "Yes" :"No" )<<endl;


return 0;
}





