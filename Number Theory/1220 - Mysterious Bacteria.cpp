//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

/*
Any number x can be expressed as x == p 1 a1   * p 2 a2  * . . . . . . .* p n an
That is b p   == p 1 a1    * p 2 a2   * . . . . . . ..  * p n an   == (p 1 b1  * p 2 b2 * . . . . . . .* * p n bn ) ^p
So p max   == gcd (a1, a2, ..., an);
If x is a negative number, p can only be an odd number
First replace x with a positive number to find the maximum p. If x is negative, divide by 2 until p is an odd number.
*/



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
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)

#define MAX 1000005

vector<ll> primes;

void sieve()
{
    bool isPrime[MAX];
    for (ll i = 0; i < MAX; ++i) isPrime[i] = true;

    for (ll i = 3; i * i <= MAX; i += 2)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (ll i = 3; i < MAX; i += 2)  if (isPrime[i]) primes.push_back(i);
}


ll factorize(ll n)
{
    ll gcd=0;
    for(ll i=0; i<primes.size() and primes[i]*primes[i]<=n; i++)
    {
        if(n%primes[i] ==0)
        {
        ll cnt=0;
        while( n%primes[i]==0 ) { n/=primes[i]; cnt++; }

        if(gcd==0)gcd=cnt;
        gcd=__gcd(gcd, cnt);
        }
    }

    if(n>1)gcd=1;
    return gcd;
}


int main()
{
    fast;
    sieve();
    ll t;
    //fr(i,20)cout<<primes[i]<<" ";
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    bool neg=false;

    scl(n);
    if(n<0){n*=-1; neg=true;}

    ll gcd=factorize(n);

    if(neg) while( gcd%2==0)gcd/=2;

    pcas(cs);
    cout<<gcd<<endl;
    }
return 0;
}
