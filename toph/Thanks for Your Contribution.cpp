
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
#define scll(n, m)              scanf("%lld%lld",&n, &m)
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
#define pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case #"<<i<<": "
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006
vector<ll>v;

int main()
{
    ll t;
    scl(t);
    tcas(cs, t)
    {
        ll n, m , i, j;
        scl(n);
        ll a[n];

        fr(i, n)scl(a[i]);
        ll ans=0, res;

        pcas(cs);

        fr(i, n)
        {
            v .pb(a[i]);
            ll tmp=a[i];

            for(j=i+1; j<n; j++)
            {
                if(a[j] > tmp)
                {
                    tmp=a[j] , v.pb(tmp );
                    ll dif=tmp - v[0]   , sz=v.size();
                    if(  dif == sz-1 ) ans=max(ans , sz ) ;
                }
            }
            v.clear();
        }

        pfl(ans);

        //fr(i, v[res].size())cout<<v[res][i]<<" " ;pn;
        //fr(i, n)v[i].clear();

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



