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
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 100006
ll tree[4*N];
//vector<ll> tree;

bool prime_check(ll n)
{
    if( n==1 or n==0)return 0;
    for(ll i=2; i*i<=n; i++) if(n%i==0 ) return 0;
    return 1;
}


void update(ll nd, ll l, ll r, ll x, ll value)
{
    if(r<x or x<l )  return ;

    if(x==l and r==x)
    {
        tree[nd]=prime_check(value);
        //cout<<nd<<" "<<value<<" "<<tree[nd]<<endl;
        return ;
    }

    ll left=nd*2;
    ll right=left+1;

    ll mid=(l+r)/2;

    update(left,l, mid, x, value);
    update(right, mid+1,r,  x, value);

    tree[nd]=tree[left]+tree[right];
}


ll query(ll nd, ll l, ll r, ll x, ll y)
{
    if(r<x or y<l )return 0;
    if(x<=l and r<=y){ return tree[nd];}

    ll m = (l+r)/2;
    ll left=nd*2;
    ll right=left+1;
    ll q = query(left,l,m,x, y);
    ll q1 = query(right,m+1,r,x, y);
    return (q+q1);

}


int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    //fr(i, 20)cout<<prime[i]<<" ";
    //pn;

    scl(n);
    //tree.resize(4* (n+5) );
    fr1(i, n)cin>>x, update(1, 1, n, i, x);



    cin>>q;
    while(q--)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            if(y>z)
                swap(y, z);
            ans=query(1, 1, n, y, z);
            cout<<ans<<endl;
        }
        else
            update(1, 1, n, y, z);

    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

