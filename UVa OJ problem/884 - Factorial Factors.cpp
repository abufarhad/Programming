#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define M 11

bool prime[M];
ll p[M],ans[M];

void sieve()
{
    ll k=0;
    prime[0]=prime[1]=1;
    for(ll i=4; i<=M; i+=2) prime[i]=1;
    for(ll i=3; i<=sqrt(M); i+=2) if(i<=sqrt(M) && !prime[i] )for(ll j=i*i; j<=M; j+=2*i) prime[j]=1;
    for(ll i=0; i<=M; i++) if(prime[i]==0)  p[k]=i,k++;
}

void pre_calc()
{
    sieve();
    //fr(i,20)cout<<p[i]<<" ";
   // cout<<endl;
    ans[1]=0;
    for(ll i=2; i<=M; i++)
    {
        ans[i]=ans[i-1];

        ll n=i, j=0;
        while( prime[n])    ///untill n not a prime
        {
            if(n%p[j]==0)
            {
                ans[i]++;
                n/=p[j];
            }
            else
                j++;
        }
        if( !prime[n])  ans[i]++;  ///if prime then increase size
        //cout<<i<<" "<<ans[i]<<endl;
    }
}

int main()
{
    pre_calc();
    ll m,n,i,j,k;
    while(cin>>n)pfl(ans[n]);
}
