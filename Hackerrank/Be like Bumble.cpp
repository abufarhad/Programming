
/// ************ Incomplete ************
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define pn                printf("\n")
#define debug           printf("I am here\n")
#define mp               make_pair
#define ppb               pop_back
#define mod             10000007

int main()
{
    ll m,n,k,i,l,j,ans,mul=0;
    cin>>k;
    while(k--)
    {
        cin>>m>>n;
        ll d=n/2;
        fr1(i,n-1)mul+=(7*i);

       if(n==1)ans=m;
       else ans=(m*mul)%mod+m;
       cout<<ans<<endl;
    }
}
