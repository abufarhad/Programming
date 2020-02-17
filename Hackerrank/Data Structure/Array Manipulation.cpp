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
#define dsort(a)            sort(a,a+N,greater<int>())
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
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>m;
    ll *freq=new ll[n+1]();  //automatic initialize to zero

    //fr(i,n)cout<<freq[i]<<" "; pn;

    fr(i,m)
    {
        cin>>x>>y>>z;
        x--;
        freq[x]+=z;
        freq[y]-=z;
    }

    //fr(i,n)cout<<freq[i]<<" "; pn;

    fr(i,n)
    {
        sum+=freq[i];
        ans=max(ans, sum);
    }

    cout<<ans<<endl;


return 0;
}


