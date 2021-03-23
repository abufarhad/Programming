#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define test_case(t)  printf("Case %d:\n",t)
#define mx 100005
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld:\n",i)


ll a[mx], tree[mx*3];

ll build_tree(ll nd, ll l, ll r)
{
    if(l==r)return tree[nd]=a[l];

    ll left=2*nd;
    ll right=2*nd +1;
    ll mid=(l+r)/2;
    build_tree(left, l, mid);
    build_tree(right, mid+1, r);

    tree[nd]=tree[left]+tree[right];
}

void update(ll nd, ll l, ll r, ll x, ll  newvalue)
{
    if(x<l || x>r)return ;
    else if( l>=x and r<=x) {tree[nd]=newvalue; return;}

    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;
    update(left, l, mid, x,newvalue);
    update(right, mid+1, r, x,newvalue);
    tree[nd]=tree[left]+tree[right];
}

ll query(ll nd, ll l, ll r, ll x, ll y)
{
    if( y<l || x >r  )return 0 ;
    if( l>=x and r<=y) return tree[nd];

    ll left=nd*2;
    ll right=nd*2+1;
    ll mid=(l+r)/2;
    ll p=query(left, l, mid, x,y);
    ll q=query(right, mid+1, r, x,y);
    return p+q;
}


int main()
{
    ll t,n,m,k;
    scl(t);
    tcas(z ,t)
    {
        ll q;
        scl(n), scl(q);
        fr1(i,n)cin>>a[i];
        build_tree(1,1,n);
        pcas(z);
        while(q--)
        {
            ll l, r,p, x,y;
            scl(p);
            if(p==1)
            {
                scl(x);
                x++;
                ll ans=a[x];
                a[x]=0;

                pfl(ans);
                update(1,1,n, x, 0);
            }
            else if(p==2)
            {
                scl(x), scl(y);
                x++;
                a[x]+=y;
                update(1,1,n, x, a[x]);
            }
            else
            {
                scl(x), scl(y);
                x++, y++;
                pfl(query(1,1,n,x,y));
            }
        }
    }
}
