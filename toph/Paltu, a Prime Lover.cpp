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
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second


#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))
#define isPrime(num) (num > 1 && (num == 2 || ((num & 1) && !on(num))))


#define mx 100000002
ll const M=100010;
ll marked[mx/64 + 2];
ll primes[5761455];

void BitSieve( )
{
    for (ll i = 3; i * i < mx; i += 2)
    {
        if (!on(i))
        {
            for (ll j = i * i; j <= mx; j += i + i) mark(j);
        }
    }

    ll k=0;
	primes[k++]=2;
	for(int i=3;i<mx;i+=2)if(isPrime(i))primes[k++]=i;
}


ll tree[M<<2][2];

void update(ll node, ll l, ll r, ll indx,  ll nval)
{
    if(indx<l  or r<indx )
        return ;
    if(l==indx and r==indx)
    {
        tree[node][0]=tree[node][1]=nval;
        return ;
    }

    ll mid=(l+r)/2;

    ll left=node*2;
    ll right=node*2+1;


    update(left, l, mid, indx, nval);
    update(right, mid+1,r, indx, nval);


    tree[node][0]=max(tree[left][0], tree[right][0] );
    tree[node][1]=min(tree[left][1], tree[right][1] );
}


pr query(ll node, ll l, ll r, ll b, ll e)
{
    if(e<l  or r<b )
        return pr(-1, inf);
    if(l>=b and r<=e)
    {
        //cout<<tree[node][0]<<" ----- "<<tree[node][1] <<endl;
        return pr(tree[node][0], tree[node][1] );
    }
    ll mid=(l+r)/2;

    ll left=node*2;
    ll right=node*2+1;

    pr x=query(left, l, mid, b, e);
    pr y=query(right, mid+1,r, b, e);

    x.ff=max(x.ff, y.ff);
    x.ss=min(x.ss, y.ss);

    return x;
}

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    BitSieve();
    //cout<<primes.size()<<endl;

    scll(n, q);

    fr1(i,n)scl(x), update(1, 1, n, i, x);

    while(q--)
    {
        scl(x);
        scll(l, r);

        if(x==1)
            update(1, 1, n, l, r);
        else
        {
            pr ans=query(1, 1, n, l, r);

            //cout<<ans.ff<<" "<<ans.ss<<endl;
            ans.ff=upper_bound(primes, primes+5761455, ans.ff )-primes;
            ans.ss=upper_bound(primes, primes+5761455, ans.ss-1 )-primes;

            ll res=ans.ff-ans.ss;
            pfl(res);
        }
    }

    //cout<<ans;pn;


    return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



