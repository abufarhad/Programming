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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<"\n"
#define pys                 cout<<"YES"<<"\n"

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<"\n"
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define mx 1000005
bool non_prime[mx];

void sieve()
{
    ll i, j;
    non_prime[1]=1;
    for(i=4; i<=mx; i+=2)non_prime[i]=1;
    for(i=3; i*i<=mx; i++)
    {
        if(non_prime[i] ==0)
        {
            for(j=i*i; j<=mx; j+=i)non_prime[j]=1;
        }
    }
}

#define N 1000005
vector<ll> v[N];
bool vis[N];
ll cnt;

void dfs(ll s)
{
    //cout<<s<<" ";
    vis[s]=1;
    cnt++;
    for(auto now: v[s])if(!vis[now]) dfs(now);
}

int main()
{
    fast;
    ll t;

    sieve();
    //fr1(i, 20)if(non_prime[i]==false)cout<<i<<" "; pn;

    ll m,n,a, b,c,d,i,j,k,x,y,z,l,q,r;

    ll ans=0,sum=0;
    cin>>n;
    fr(i, n-1)
    {
        cin>>a>>b>>c;
        if(non_prime[c]== 1)
        {
            //cout<<c<<endl;
            v[a].pb(b);
            v[b].pb(a);
        }
    }

    fr1(i, n)
    {
        if(vis[i]==0 )
        {
            cnt=0;
            dfs(i);
            //cout<<endl<<"cnt "<<cnt<<endl;
            ll baki=n-cnt;

            ans+=baki*(baki-1)*cnt;
        }
    }

    cout<<ans;pn;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1
