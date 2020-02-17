#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back



/*
ll p[Max],k=1;
vector<bool > a(100000000, true);


ll sieve( )
{
    ll i,j;
    a[0]=a[1]=false;

    for(i=4; i<=Max; i+=2)
    {
        a[i]=false;
    }
    for(i=3; i<=sqrt(Max); i+=2)
    {
        for(j=i*i; j<=Max; j=j+2*i)
        {
            a[j]=false;
        }
    }
    p[0]=2;

    for(i=3; i<=Max; i+=2)
    {
        if(a[i]==true)
        {
            p[k]=i;
            //cout<<p[k]<<" ";
            k++;
        }
    }
}


/*
bool a[Max];
ll sieve(ll n)
{
    ll i,j;

    memset(a,true ,sizeof(a));

    for ( i=2; i*i<=n; i++)
    {
        if(a[i]==true)
        {
            for( j=i*2; j<=n; j += i)
                a[j]=false;
        }
    }

    ll k=1;
    for(i=2; i<=Max; i++)
    {
        if(a[i]==true)
        {
            p[k]=i;
            //cout<<i<<" ";
            k++;
        }
    }
}
*/

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
            for(j=i*i ; j<=mx; j+=2*i)prime[j]=1;
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


