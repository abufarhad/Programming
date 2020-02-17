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
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

#define mxx                  1000005

bool prime[mxx];
ll p[mxx];
ll k;
void sieve()
{
    ll i,j;
    prime[0]=prime[1]=1;

    for(i=4;i<=mxx;i+=2)prime[i]=1;
    for(i=3;i<=sqrt(mxx); i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i ; j<=mxx; j+=2*i)prime[j]=1;
        }
    }
    p[0]=2;
    k=1;
    for(i=3;i<=mxx;i++)
    {
        if(prime[i]==0)p[k]=i, k++;
    }
}

string s;


ll chkk(ll i, ll j)
{
    ll tmp=0;
    ll stp=j-i+1;
    while(i<=j)
    {
    tmp=tmp*10+(s[i]-'0');
    i++;
    }
    //pfl(tmp);

    if(prime[tmp]==0)return tmp;
    else return 0;
}


int main()
{
    fast;
    sieve();
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    cin>>n>>s;
    ll mx=0;

    for(i=n-1; i>=0;i--)
    {
            ll st=s[i]-'0';
           // cout<<i<<" Fst "<<st<<endl;

            if(i-1>=0) mx=max( mx,  chkk( i , i ));
            if(i-1>=0) mx=max( mx,  chkk( i-1 , i ));
            if(i-2>=0)mx=max( mx,  chkk( i-2, i) );
            if(i-3>=0)mx=max( mx,  chkk(i-3 ,i ));

            //cout<<"Mx = "<<mx<<endl;
    }
    pcas(cs);
    if(mx)cout<<mx<<endl;
    else if(mx==0 or mx==1) cout<<"This is a junk!"<<endl;

}
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

