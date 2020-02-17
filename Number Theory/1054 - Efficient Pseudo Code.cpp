//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Category:Number theory
 ** @Source_to_understand : http://nstu-coding-planet.blogspot.com/2017/07/lightoj-1054-efficient-pseudo-code.html
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

#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
#define mx 100000

ll  md =1000000007;
ll bigmod(ll b, ll p)
{
    if(p==0)  return 1;
    if(p%2==1)  return ((b%md)*bigmod(b,p-1))%md;
    else
    {
        ll y=bigmod(b,p/2);
        return (y*y)%md;
    }
}

ll mod_inverse(ll n)
{
    ll tmp=__gcd(n, md);
    if(tmp !=1)cout<<"Mod Inverse not possible"<<endl;
    else
    {
        return bigmod(n, md-2 );
    }
}


vector<ll>primes;
bool is_prime[mx];
ll sieve()
{
    fr(i, mx)is_prime[i]=true;

    for(ll i=3;i*i<=mx; i+=2)
    {
        if(is_prime[i])
        {
            for(ll j=i*i; j<=mx; j+=i)  is_prime[j]=false;
        }
    }

    primes.pb(2);
    for(ll i=3;i<=mx; i+=2)if(is_prime[i])primes.pb(i);
}



ll solve_sum_of_factors(ll n, ll m)
{
    ll sum=1, lob, hor, cnt=0,res,i;
    ll tmp=n;

    for(i=0; primes[i]<=sqrt(n); i++)
    {
        if(tmp%primes[i]==0)
        {
            cnt=0;
            while(tmp%primes[i]==0)
            {
                tmp/=primes[i];
                cnt++;
            }

            ll total=cnt*m +1 ;
            ll lob=bigmod(primes[i], total );
            ll hor=mod_inverse(primes[i]-1);

            res=(((lob-1+md)%md)*((hor+md)%md))%md; // here we add m to get the exact result because x or y can be of negative value since in the problem, n & m are signed integer
            sum=((sum%md)*(res%md))%md;

        }
    }

    if(tmp > 1)
    {
        lob=(bigmod(tmp , m+1 ))%md;
        hor=mod_inverse(tmp -1);

        res=( ((lob-1+md) %md)  * ((hor+md) %md) )%md;
        sum=( (sum%md)   *  (res%md ) ) %md;
    }

    return sum;
}


int main()
{
    fast;
    sieve();
    //fr(i, 20)cout<<primes[i]<<" "; pn;

    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>m;

    ans=solve_sum_of_factors(n, m);

    pcas(cs);
    cout<<ans<<endl;
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

