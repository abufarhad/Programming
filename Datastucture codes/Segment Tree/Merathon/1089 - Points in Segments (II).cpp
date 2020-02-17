//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back

#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
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
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld:\n",i)
#define all(x) 	    x.begin(), x.end()
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

#define N 1000003

vector<pair<ll, ll> > segment;
vector<ll> store, query;
ll cum_sum[N];

int main()
{
    //fast;
    ll t;
    scl(t);
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        map<ll, ll> mp;
        ll cnt=0,ans=0,sum=0;
        cin>>n>>q;

        fr(i,n)
        {
            cin>>x>>y;
            if(! mp[x ])store.pb(x), mp[x]=1;
            if(! mp[y ])store.pb(y), mp[y]=1;

            segment.pb({x, y});
        }

        sort(all(store));
        //fr(i, store.size())cout<<store[i]<<" "; pn;

        fr(i, q)
        {
            cin>>x;
            query.pb(x);
             if(! mp[x ])store.pb(x), mp[x]=1;
        }


        sort(all(store));
        ll sz=store.size();

         //fr(i, store.size())cout<<store[i]<<" "; pn;

        map<ll, ll> pos;

        fr(i, sz)  pos[ store[i] ]=i;


        //fr(i, store.size())cout<<pos[store[i]]<<" "; pn;

        fr(i, segment.size())
        {
            ll fst=pos[ segment[i].first];
            ll snd=pos[segment[i].second];

            //cout<<fst<<" "<<segment[i].first<<" - "<<snd+1<<" "<<segment[i].second<<endl;

            cum_sum[fst ]++;
            cum_sum[snd+1]--;
        }

        //fr(i, sz)cout<<cum_sum[i]<<" "; pn;


        fr1(i, sz-1)cum_sum[i]+=cum_sum[i-1];

        pcas(cs);
        fr(i, q)
        {
            pfl(  cum_sum[ pos[ query[i]  ]  ]  );
        }

        mem(cum_sum, 0);
        segment.clear();
        store.clear();
        query.clear();

    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

