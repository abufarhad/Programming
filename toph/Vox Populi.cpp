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
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 100006
vector<pr>v , ans;
map<pr , ll>mp , cnt;

ll dx[]= {-1,0,0,1,0,1 };
ll dy[]= {0,-1,0,0,1,1 };

bool cmp( pr a,  pr b )
{
    if(a.ff == b.ff ) return a.ss < b.ss;
    else return a.ff < b.ff;
}

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll sum=0;
    scl(n);
    ll a , mx=-1;

    fr(i,n)
    {
        cin>>x>>y;

        l=x/10  , r= y/10;
        fr(j, 6)
        {
           ll xx= (l+ dx[j] )*10;
           ll yy= (r+ dy[j])*10;

           d=abs(xx-x )+abs(yy-y);
           if(d>10)continue;

            cnt[{xx , yy } ]++;
            ll cc=cnt[{xx , yy } ];
            mx=max(mx, cc);
            ans.pb({xx, yy});
          }
    }

    sort(all(ans) , cmp);
    fr(i, ans.size())
    {
        if(mx==cnt[{ans[i].ff , ans[i].ss } ]  and  mp[{ans[i].ff , ans[i].ss } ] !=1 )cout<<ans[i].ff<<" "<<ans[i].ss<<endl;
        mp[{ans[i].ff , ans[i].ss } ]=1;
    }

return 0;
}




