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
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




//vector<ll>cnt(26, 0);   ///create fixed 26 sized vector and initialize initially all 0
// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

// ll *a=new ll[n+1]();  //automatic initialize to zero
///Every even integer greater than 2 can be represented as the sum of two primes numbers.
//count item in array : count(arr,arr+n,'I');

//bool cmp(ll i, ll j){  if( fac[i]==fac[j])return i>j;   return fac[i]< fac[j];  }

#define mx                  100000000

bool prime[mx];
ll p[mx];
ll k;
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
    k=1;
    for(i=3;i<=mx;i++)
    {
        if(prime[i]==0)p[k]=i, k++;
    }
}



int main()
{
    fast;
    sieve();
    ll t;
    cout<<3*k<<endl;
    vector<ll>v;



    cin>>t;
    while(t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n];

    fr(i,n)cin>>a[i];
    cout<<ans<<"\n";
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

