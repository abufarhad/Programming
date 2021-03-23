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
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pf(x)               printf("%lld ",x)

#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 100005
vector<ll>v[N], sum[N];

int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,c,d, u,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4, s5, s6;

        ll cnt=1,cn=0,ans=0;
        cin>>n>>m;

        ll a[n+5], b[m+5];

        v[0].pb(0);
        sum[0].pb(1);

        fr1(i , n)
        {
            cin>>a[i];
            v[a[i] ].pb(i);
        }

        b[0]=0;
        fr1(i , m)cin>>b[i];


        fr1(i , m)
        {
            ll pre=b[i-1];

            for(auto id : v[b[i] ] )
            {
                ll lw=lower_bound(all(v[ pre] ) , id )- v[pre].begin();
                //cout<<lw<<endl;
                lw--;

                //cout<<"id lw "<<pre<<" "<<id<<" "<<b[i]<<" "  <<lw<<endl;
                ll here=sum[ pre ][lw];


                if(sum[ b[i] ].size() )
                {
                    sum[ b[i] ].pb( sum[ b[i] ].back() + here  );
                }
                else sum[b[i] ].pb( here );

                //cout<<b[i]<<endl;
                //for(auto now: sum[b[i]])pf(now);pn;
            }
        }

        x=b[m];

        ans=sum[x].back();
        pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

