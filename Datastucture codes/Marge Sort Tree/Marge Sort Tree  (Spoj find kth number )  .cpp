//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 200006
#define seg_tree(n) 	ll left=n*2,right=l+1,mid=(l+r)/2

#define segment_tree int l=n*2,r=l+1,mid=(b+e)/2
#define mx 100005

pr a[mx];
ll arr[mx];
vector<ll>tree[4*mx];

void build( ll node , ll l , ll r )
{
    if(l==r)
    {
        tree[node].pb( a[l].ss );
        return ;
    }

    ll mid=(l+r)/2;
    ll left=2*node  , right=left+1;

    build(left  , l , mid);
    build(right , mid+1 , r);

    merge( all(tree[left] )  , all(tree[right])  , back_inserter( tree[node]  ) );
}

ll query(ll n, ll b, ll e, ll i, ll j, ll k)
{
    if(b==e)
    {
        return tree[n].back();
    }

    ll mid=(b+e)/2;
    ll l=2*n  , r=l+1;

    ll x = upper_bound(all(tree[l]),j)-lower_bound(all(tree[l]),i);

    if(x >= k )  return  query(l  , b , mid  ,i , j, k);
    else return query(r , mid+1 , e , i , j, k-x);
}


int main()
{
    ll n,m;
    scll(n,m);

    fr1(i  , n)
    {
        scl(a[i].ff );
        a[i].ss=i;

        arr[i]=a[i].ff;
    }

    sort(a+1,a+n+1);

    build(1,1,n);


    while(m--)
    {
        ll x, y, z;
        scll(x, y)  , scl(z);
        ll ans=query(1,1,n,x, y, z);
        ans=arr[ans];
        pfl(ans);
    }

    return 0;
}
