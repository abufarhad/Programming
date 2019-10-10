#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
ll dx[4]= {0,0,1,-1};
ll dy[4]= {1,-1,0,0};
char a[25][25];
ll cnt,r,c;

void dfs(ll i, ll j)
{
    //cout<<i<<" "<<j<<endl;
    a[i][j]='#';

    fr(f,4)
    {
        ll m=i+dx[f];
        ll n=j+dy[f];
        if(m<r && m>=0 && n<c && n>=0 && a[m][n]=='.'){ dfs(m,n); cnt++;}
    }
}


int main()
{
    ll m,n,i,j,k,x;
    ll t;
    cin>>t;
    fr1(x,t)
    {
        cnt=1;
        cin>>c>>r;
        fr(i,r)fr(j,c)  cin>>a[i][j];

        fr(i,r)fr(j,c) if(a[i][j]=='@')  dfs(i,j);

        printf("Case %lld: %lld\n", x, cnt);
    }
}
