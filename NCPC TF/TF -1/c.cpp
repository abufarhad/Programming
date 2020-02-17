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
#define debug               cout<<"i am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};





#define N 100006
ll cmsm[N] , mxsm=0;

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0,pos=0;
    scl(n);
    ll a[n];

    fr1(i,n)cin>>a[i];
    ll mx=a[0];

    ll pp=1;
    cmsm[1]=a[0];
    fr1(i, n)
    {
        cmsm[i]=cmsm[i-1]+a[i];
    }

    //fr1(i, n)cout<<cmsm[i]<<" "; pn;


     ll k=1 , sm=0;
     pp=0;

    fr1(i, n)
    {
        for(j=1;j<=n;j+=i)
        {
            sm=max(sm, cmsm[j+i-1]-cmsm[j-1] );
            //pp+=i;
        }
        mxsm+=sm;
        sm=0;
    }
    pfl(mxsm);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

