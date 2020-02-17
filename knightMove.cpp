//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
ll  dx[] = {2,2,-2,-2} ;
ll dy[] = {2,-2,2,-2};


#define N 100006
bool vis[10][10];
bool vis1[10][10];

vector<ll> nd[N];
vector<ll>pos;

void dfs(ll x, ll y)
{
    vis[x][y]=true;
    cout<<x<<" - "<<y<<endl;

    for(ll i=0; i<4; i++)
    {
        x=dx[i]+x;
        y=dy[i]+y;

        cout<<i<<endl;

        if( (x>7 or y>7) or x<0 or y<0 or vis[x][y]==true)continue;
        dfs(x, y);
    }
return;
}

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    char mp[10][10];
    ll cnt=0;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    fr(i, 8)fr(j, 8)cin>>mp[i][j];

    fr(i, 8)fr(j, 8)if(mp[i][j]=='K')pos.pb(i), pos.pb(j);


    fr(i, pos.size())cout<<pos[i]<<" ";
    //pn;

    dfs(pos[0] , pos[1]);

    //debug;

    fr(i, 10)fr(j, 10)vis1[i][j]=vis[i][j];
    mem(vis, 0);


    dfs(pos[2] , pos[3]);

    //fr(i, 10)fr(j, 10)if( vis1[i][j]) cout<<i<<" "j<<endl; =vis[i][j];
    pn;
    fr(i, 8)fr(j, 8)
    {
         if(vis[i][j]==true and vis1[i][j]==true)cout<<i<<" "<<j<<endl, cnt=1;
    }

    pn;
    fr(i, 8)fr(j, 8)
    {
        if(mp[i][j] !='#'  and vis[i][j]==true and vis1[i][j]==true)cout<<i<<" "<<j<<endl, cnt=1;
    }

    if(cnt)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    mem(vis, 0);
    mem(vis1, 0);
    pos.clear();
    }

return 0;
}
