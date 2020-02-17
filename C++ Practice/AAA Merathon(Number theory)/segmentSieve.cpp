#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 32000
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)


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


void segsieve(ll l, ll r)
{
    bool isprime[r-l+1];
    fr(i,r-l+1)isprime[i]=true;
    if(l==1)isprime[0]=false;

    for (ll i = 0; primes[i]*primes[i] <= r; ++i)
    {
        ll currentPrime = primes[i];
        ll base = (l/currentPrime)*currentPrime;

        if (base < l)   base += currentPrime;

        for (ll j = base; j <= r; j += currentPrime)
        {
            isprime[j-l] = false;
        }
        if (base == currentPrime) isprime[base-l] = true;
    }

    fr(i, r-l+1)if(isprime[i])cout<<i+l<<endl;
    puts("");

}

int main()
{
    ll t,i;
    cin>>t;
    sieve();
    //for(i=0; i<=20;i++)cout<<prime_numbers[i]<<" "; cout<<endl;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        segsieve(l,r);
        //cout<<endl;
    }
}
