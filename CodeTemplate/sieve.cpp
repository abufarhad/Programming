#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define mx                  100000000

bool prime[mx];
ll p[mx];
void sieve()
{
    ll i,j;
    prime[0]=prime[1]=1;

    for(i=4;i<=mx;i+=2)prime[i]=1;
    for(i=3;i<=sqrt(mx); i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i ; j<=mx; j+=2*j)prime[j]=1;
        }
    }
    p[0]=2;
    ll k=1;
    for(i=3;i<=mx;i++)
    {
        if(prime[i]==0)p[k]=i, k++;
    }
}

int main()
{
    sieve();
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    //fr(i, 20)cout<<p[i]<<" ";

    cin>>t;

    while(t--)
    {
        cin>>n;
        cout<<p[n]<<endl;
    }
    return 0;
}
