//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

/*.....Kings path....*/
//ll dx[]={-1,-1,-1,0,1,1,1,0};
//ll dy[]={-1,0,1,1,1,0,-1,-1};



// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmd(ll b, ll p){  ll res=1, rem=b;  while(p)   { if(p%2==1 ) {res=res*rem%md ;  p--;}  rem=rem*rem%md; p>>=1; } return res;}

//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}



#define N 100006
ll lf[N], ri[N] , a[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;

    fr1(i,n)cin>>a[i];

    fr1(i, n)
    {
        if(a[i-1]<a[i] )lf[i]=lf[i-1]+1;
        else lf[i]=1;
    }

    for(i=n; i>=1; i--)
    {
        if(a[i]<a[i+1] )ri[i]=ri[i+1]+1;
        else ri[i]=1;
    }

    //fr1(i, n)cout<<lf[i]<<" "; pn;
    //fr1(i, n)cout<<ri[i]<<" "; pn;

    for(i=1; i<=n ; i++)
    {
        ans=max(ans, lf[i-1]+1 );
        ans=max(ans, ri[i+1]+1 );

        if(a[i-1]+1<a[i+1] )
        {
            ans=max(ans, lf[i-1]+ri[i+1]+1 );
        }
    }

    cout<<ans;pn;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



