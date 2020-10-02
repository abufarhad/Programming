#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define MAX                  100000000

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


int main()
{
    sieve();
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    fr(i, 20)cout<<primes[i]<<" ";

    cin>>t;

    while(t--)
    {
        cin>>n;
        //cout<<p[n]<<endl;
    }
    return 0;
}
