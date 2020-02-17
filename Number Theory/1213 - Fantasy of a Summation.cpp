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
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

ll bigmd(ll n, ll p, ll md)
{
    if(p==0)return 1;
    if(p&1)return (n%md * bigmd(n, p-1, md)%md )%md;
    else
    {
        ll tmp=bigmd(n, p/2, md)%md;
        return (tmp* tmp)%md;
    }
}

/*
For k label loop
= sum* k* (n)^(k-1)
*/

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
     ll n,m, c, md, sum=0;
     cin>>n>>m>>md;
     fr(i, n)cin>>c, sum+=c, sum%=md;

     ll ans=((( sum* m )%md ) * bigmd(n, m-1, md) )%md;
     pcas(cs);
     cout<<ans<<endl;
    }

return 0;
}



