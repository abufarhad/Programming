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
#define pf(x)              printf("%lld ",x)

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
#define md                  998244353
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200005
ll f[N+5], pow2[N+5];

ll febo( )
{
    f[1]=f[2]=1;
    for (ll i=3; i<=N; i++)
    {
        f[i]=f[i-1]+f[i-2];
        f[i]%=md;
    }
}
ll power2()
{
    pow2[0]=1;
    fr1(i, N)
    {
        pow2[i]=pow2[i-1]*2;
        pow2[i]%=md;
    }
}

ll bigmd(ll b, ll p)
{
    ll res=1  , rem=b;
    while(p)
    {
        if(p%2)   res=(res*rem)%md, p--;
        rem=(rem*rem)%md;
        p/=2;
    }
    return res;
}
int main()
{
    febo(), power2( );
    ll t=1;
    //cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        //cout<<f[n]<<" "<< pow2[n]<<endl;

        x=bigmd( pow2[n], md-2  );
        ans=(f[n] * x );

        //cout<<x<<" "<<ans<<endl;
        ans%=md;
        pfl(ans);
    }
    return 0;
}
