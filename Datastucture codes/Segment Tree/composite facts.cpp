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
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)

#define N 1000006
#define mx 100005
ll a[mx], tree[mx*3], fact[N];

void fac()
{
    fact[0]=1;
    fr1(i,N)fact[i]=(fact[i-1]%md * i%md)%md , fact[i]%=md;
}

ll calc(ll n)
{
    ll f=fact[n]%md+2;
    ll sum=(n-1)*f + ((n-1)*(n-2))/2;
    return sum%md;
}

void build(ll nd, ll l, ll r)
{
    if(l==r){   tree[nd]=calc( a[l] );  return ; }

    ll left=nd*2;
    ll right=left+1;
    ll mid=(l+r)/2;

    build(left,  l, mid);
    build(right, mid+1, r);

    tree[nd]=tree[left]%md +tree[right]%md;
    tree[nd]%=md;
}

void update(ll nd, ll l, ll r, ll idx, ll new_val)
{
    if(idx <l  || idx>r)return ;

    else if(idx <=l  and idx>=r ){tree[nd]=calc(new_val); return ;}

    ll left=nd*2;
    ll right=left+1;
    ll mid=(l+r)/2;

    update(left,  l, mid, idx, new_val);
    update(right, mid+1, r, idx, new_val);

    tree[nd]=tree[left]%md +tree[right]%md;

    tree[nd]%=md;
}

ll query(ll nd, ll l, ll r, ll x, ll y)
{

    if( y<l || x >r  )return 0 ;
    if( l>=x and r<=y) return tree[nd]%md;

    ll left=nd*2;
    ll right=left+1;
    ll mid=(l+r)/2;

    ll p=query(left,  l, mid, x, y) %md ;
    ll q=query(right, mid+1, r, x, y) %md;

    return (p+q)%md;
}

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>n>>q;
    fac();
    ll cnt=0,ans=0,sum=0;

    fr1(i,n)cin>>a[i];

    build(1, 1, n);


    while(q--)
    {
        cin>>m;

        if(m==1)
        {
            cin>>x>>y;
            update(1,1, n, x, y);
        }
        else
        {
            cin>>x>>y;
            cout<<query(1,1,n, x, y)<<endl;
        }
    }

return 0;
}

/*
8 5
13 44 28 15 36 71 55 93
2 3 6
*/

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


