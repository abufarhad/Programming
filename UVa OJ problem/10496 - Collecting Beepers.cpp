#include<iostream>
using namespace std;
#include<cstring>
#define ll long long
#define debug               cout<<"I am here"<<endl;

bool vis[11][1025];
ll val[11][1025];

ll beepers;

struct fun
{
    ll x, y;
}a[12];

ll solve(ll now , ll mask)
{
    if(mask== (1<< beepers)-1 )
    {
        vis[now][mask]= true;
        return  val[now][mask]= abs( a[0].x - a[now].x  )+ abs( a[0].y - a[now].y );
    }

    if(vis[now][mask] )return val[now][mask];

    ll ans=10000000;

    for(ll i=0 ; i<beepers; i++)
    {
        if( (mask & (1<<i)) ==0 )
        {
            ll cost=solve(i , mask| (1<<i)  ) + abs( a[i].x - a[now].x  )+ abs( a[i].y - a[now].y );

            //cout<<"Cost "<<cost<<endl;
            ans=min(ans , cost);
        }
    }

    vis[now][mask]=true;
    return val[now][mask]=ans;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i , j  , k ,x, y , r, c;

        cin>>r>>c;
        cin>>a[0].x>>a[0].y;

        cin>>beepers;
        beepers++;              //one for starting point

        for(i=1; i< beepers; i++)cin>>a[i].x>>a[i].y ;

        memset(vis , 0 , sizeof(vis));
        ll ans= solve(0, 1);
        printf("The shortest path has length %lld\n",  ans  );
    }
}

