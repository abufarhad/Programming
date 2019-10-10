#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define md                  10001
bool prime[md];
vector<ll>p;
void sieve()
{
    ll i,j;
    prime[0]=prime[1]=1;
    for(i=4;i<=md;i+=2)prime[i]=1;
    for(i=3;i<=sqrt(md); i+=2) if(prime[i]!=1 ) for(j=i*i;j<=md; j+=2*i)prime[j]=1;
    fr1(i, md) if(prime[i]==0)p.pb(i);
}
ll dp[100005];
int main()
{
    sieve();
    for(int i=1;i<=10000;i++)dp[i]=-1e18;
    dp[0]=0;

    //fr(i, p.size())
    //for(ll j=10000;j>=p[i];j--)dp[j]=max( dp[j], dp[j-p[i] ] +1 );

    for(auto x:p) for(ll j=10000; j>=x;j--) dp[j]=max(dp[j], dp[j-x]+1 );

    ll t; cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        cout<<max(0LL,dp[n])<<endl;
    }
    return 0;
}
