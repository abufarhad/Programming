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
#define pcas(i)             printf("Case %lld:\n",i)
ll a[mx], tree[mx*4];

ll build_tree(ll nd, ll l, ll r)
{
    if(l==r)
    {
        return tree[nd]=a[l] ;
    }

    ll left=nd*2;
    ll right =nd*2+1;
    ll mid=(l+r)/2;

    ll p=build_tree(left, l, mid);
    ll q=build_tree(right, mid+1, r);
    return tree[nd]=min(p,q);
}

ll query(ll nd, ll l, ll r, ll x, ll y)
{
    if( y<l || x >r  )
        return INT_MAX ;
    else if(x<=l  and y>=r )
        return tree[nd];
    ll left=nd*2;
    ll right =nd*2+1;
    ll mid=(l+r)/2;
    ll p,q;
    p=query(left, l, mid, x,y);
    q=query(right, mid+1, r, x,y);
    return min(p, q);
}



int main()
{
    ll i,j,k,m,t,n;
    scl(t);
    tcas(x,t)
    {
        ll q;
        scl(n), scl(q);
        fr1(i,n)scl(a[i]);
        build_tree(1,1,n);

        pcas(x);
        while(q--)
        {
            ll l,r;
            scl(l), scl(r);
            pfl( query(1,1,n,l,r) );
        }
    }
}

