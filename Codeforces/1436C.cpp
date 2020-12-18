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
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 1005
ll n , x, pos , boro, choto , space , ans=1;
ll fact[N];

void fac()
{
    fact[0]=1;
    fr1(i , N)fact[i]=(fact[i-1]*i )%md;
}

ll bs()
{
    ll l=0 , r=n;
    while(l<r)
    {
        ll mid=(l+r)/2;

        if(mid>pos)
        {
            ans=(ans*boro)%md;
            boro--, space--;
            r=mid;
        }
        else if(mid<pos)
        {
            ans=(ans*choto)%md;
            choto--, space--;
            l=mid+1;
        }
        else
        {
            l=mid+1;
        }
    }

    if(l>0  and l-1==pos)ans=(ans*fact[space])%md;
    else ans=0;

    return ans%md;
}

int main()
{
    fac();
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,b,c,d,i,j,k,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,sum=0 ;
        cin>>n>>x>>pos;

        boro=n-x , choto=x-1 , space=n-1;

        cout<<bs()<<endl;
    }

return 0;
}
