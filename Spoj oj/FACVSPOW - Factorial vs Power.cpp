
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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

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
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 10000050

double f[N];
void fact()
{
    f[1]=log(1.0);
    for(ll i=2; i<=N; i++) f[i]=f[i-1]+log10( double(i));
}

int main()
{
    fact();
    ll t;
    scanf("%lld", &t);
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=-1,sum=0;
    scanf("%lld", &x);

    l=1, r=1e7;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        double p=(double)mid*log10(x);

        if( f[mid] > p )
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    printf("%lld\n" , ans);
    }
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




