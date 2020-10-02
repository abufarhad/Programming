//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)



#define N 10000009
ll prime[N];
bool primes[N];
ll cmsm[N];

void sieve()
{
    ll i, j;

    for(int i = 3 ; i<= sqrt(N) ; i+=2)
    {
        if(!primes[i])
        {
            for(int j = i*i ; j<= N ; j+=2*i)   primes[j] = 1;
        }
    }

    //fr(i, N)if( isprime[i])prime[k]=i , k++;
    cmsm[2]=1;
    // only prime numbers has no factor so in  this case only incremented otherwise all this marked already in seive
    for(i=3; i<=N; i++)  { if(primes[i]==0  and i%2 )cmsm[i]+=(cmsm[i-1]+1); else cmsm[i]=cmsm[i-1];}
}

int main()
{
    sieve();
    //fr(i, 20)cout<<prime[i]<<" "; pn;

    ll t;
    //cin>>t;
    scanf("%lld" , &t);
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    scanf("%lld" , &n);

    //we have to find prime number between n and n/2 because all prime before n/2 are marked in second question)(Algo. )
    ll ans=cmsm[n]- cmsm[n/2];
    printf("%lld\n" , ans);
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




