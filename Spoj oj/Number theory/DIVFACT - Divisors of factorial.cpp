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
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 100006

vector<ll>prime;
bool notprime[N];
void sieve( )
{
    ll i, j;
    notprime[0]=notprime[1]=1;
    for(i=4;i<=N;i+=2)notprime[i]=1;

    for(i=3;i*i<=N; i+=2)
    {
        if(notprime[i]==0)
        {
            for(j=i*i; j<=N;j+=i)
            {
                notprime[j]=1;
            }
        }
    }

    fr1(i, N)if(notprime[i]==0)prime.pb(i);
}

ll Divisors_of_factorial( ll n)
{
    ll ans=1;
    fr(i, prime.size())
    {
        ll x=prime[i]  , res=0;

        //find the largest x such that p^x divides n!
        //Legendres  Formula :  n/p + n/(p^2) + n/(p^3) + ................
        while(x<=n)
        {
            res+=n/x;
            x*=prime[i];
        }
        //cout<<prime[i]<<" "<<res<<endl;

        //For calculating number of divisor of this number  normally we calculate as ( (p1+1)*(p2+1)+........... ) for all prime number

        ans=ans*(res+1)%md;
    }
    return ans;
}


int main()
{
    sieve();
    //fr(i, 20)cout<<prime[i]<<" ";pn;

    ll t;
    scl(t);
    while( t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        ll cnt=0,cn=0,ans=0,sum=0 ;

        scl(n);

        ans=Divisors_of_factorial(n);
        pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



