//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back

#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: \n",i)
#define all(x) 	    (x).begin(), (x).end()
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

#define N 50005
ll tree[4*N];
ll a[N], store[N];

map<ll, ll> mp;
vector<pair<ll, ll> > segment;



void update(ll nd, ll b, ll e, ll l, ll r)
{
    if( a[e] <l  or r< a[b])
        return ;

    if(l<=a[b]  and a[e]<=r )
    {
        tree[nd]++;
        return ;
    }
    ll left=nd<<1;
    ll right=left+1;
    ll mid=(b+e)>>1;

    update(left, b, mid, l, r);
    update(right, mid+1, e, l, r);
}

void build_query(ll nd, ll b, ll e)
{
    if(b==e)
    {
        mp[ a[b] ]+=tree[nd];
        return ;
    }

    ll left=nd<<1;
    ll right=left+1;
    ll mid=(b+e)>>1;

    tree[left]+=tree[nd];
    tree[right]+=tree[nd];

    build_query(left, b, mid);
    build_query(right, mid+1, e);

}

int main()
{
    //fast;
    ll t;
    scl(t);
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

        ll cnt=0,ans=0,sum=0;
        scl(n);
        scl(q);

        fr(i,n)
        {
            scl(x);
            scl(y);
            segment.pb({x, y});
        }

        fr(i, q)
        {
            scl(a[i]);
            store[i]=a[i];
        }
        sort(a, a+q);

        fr(i, n)
        {
            ll fst=segment[i].first;
            ll snd=segment[i].second;

            update(1, 0, q-1, fst, snd);
        }

        build_query(1, 0, q-1);

        pcas(cs);
        fr(i, q)
        {
            cout<<mp[store[i]]<<endl;
        }

        mp.clear();
        mem(tree, 0);
        mem(a, 0);
        segment.clear();

    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

