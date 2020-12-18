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


int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0, ans1=0 ;
        cin>>n>>m;

        ll a[n+5][m+5] , b[n+5][m+5];

       fr1(i , n)fr1(j , m)       cin>>a[i][j];

        fr1(i , n)
        {
          fr1(j , m)
           {
                x=a[i][j], y= a[i][m-j+1] ;
                p=a[n-i+1][j] , q=a[n-i+1][m-j+1];

                vector<ll>v;
                v.pb(x), v.pb(y), v.pb(p), v.pb(q);
                sort(all(v));
                b[i][j]=v[1];
            }
        }

        fr1(i , n)   fr1(j , m)ans+=abs(a[i][j]-b[i][j]);
        cout<<ans<<endl;
    }

return 0;
}
