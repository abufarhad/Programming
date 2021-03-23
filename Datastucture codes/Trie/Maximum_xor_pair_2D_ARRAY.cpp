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
#define pf(x)               printf("%lld ",x)

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
#define pcas(i)             cout<<"Query "<<i<<": ";
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 100001

ll a[N] , trie[31*N][3] , End[31*N];
ll root=1;

void Insert(ll n, ll id)
{
    ll i,  now=1;
    for(i=31; i>=0; i--)
    {
        bool c=(n>>i )&1;
        if(!trie[now][c] ) trie[now][c]=++root;

        now=trie[now][c];
    }
    End[now]=id;
}

ll query(ll n)
{
    ll i, now=1;
    for(i=31; i>=0; i--)
    {
        bool c=(n>>i )&1;
        if(trie[now][!c] ) c^=1;

        now=trie[now ][c];
    }

    return End[now];
}

int main()
{
    ll t;
    ll i , j;
    //scl(t);
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;

        scl(n);
        fr1(i , n) scl(a[i] ), Insert( a[i] , i);


        scl(q);
        tcas(qr, q)
        {
            scl(x);

            ll id=query(x);

            printf("Query %lld: %lld %lld\n", qr , id , a[id]^x);
        }
    }
return 0;
}

