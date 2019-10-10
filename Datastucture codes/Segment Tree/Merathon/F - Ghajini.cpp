#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define mx 100005
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
ll a[mx], mx_tree[mx*3], mn_tree[mx*3];

void build_tree(ll nd, ll l, ll r)
{
    if(l==r){  mx_tree[nd]=a[l] , mn_tree[nd]=a[l] ;return; }

    ll left=nd*2;
    ll right =nd*2+1;
    ll mid=(l+r)/2;

    build_tree(left, l, mid);
    build_tree(right, mid+1, r);
    mx_tree[nd]=max(mx_tree[left], mx_tree[right]);
    mn_tree[nd]=min(mn_tree[left], mn_tree[right]);
}

ll mn_query(ll nd, ll l, ll r, ll x, ll y)
{
    if( y<l || x >r  )return INT_MAX ;
    else if(x<=l  and y>=r ) return mn_tree[nd];
    ll left=nd*2;
    ll right =nd*2+1;
    ll mid=(l+r)/2;
    ll p,q;
    p=mn_query(left, l, mid, x,y);
    q=mn_query(right, mid+1, r, x,y);
    return min(p, q);
}

ll mx_query(ll nd, ll l, ll r, ll x, ll y)
{
    if( y<l || x >r  )return 0 ;
    else if(x<=l  and y>=r ) return mx_tree[nd];
    ll left=nd*2;
    ll right =nd*2+1;
    ll mid=(l+r)/2;
    ll p,q;
    p=mx_query(left, l, mid, x,y);
    q=mx_query(right, mid+1, r, x,y);
    return max(p, q);
}



int main()
{
    ll i,j,k,m,t,n;
    scl(t);
    tcas(j,t)
    {
        ll q;
        scl(n), scl(q);
        fr1(i,n)scl(a[i]);
        build_tree(1,1,n);
        pcas(j);
        ll ans=0;
        ll x,y;
        q--;        //because i  count from 1
        for(i=1; i<n-q; i++)
        {
            ll mx_=mx_query(1,1,n,i,i+q);

            ll mn_=mn_query(1,1,n,i,i+q);
            ll dif=mx_-mn_;
            ans=max(ans, dif);
        }
        pfl(ans);
    }
}

