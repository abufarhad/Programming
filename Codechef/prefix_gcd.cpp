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
#define pf(x)              printf("%lld ",x)

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

#define N 200005


int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 , mx=-1;
        cin>>n;

        ll a[n+1];

        set<ll>st;

        fr1(i , n)  cin>>a[i], st.insert(a[i]);



        vector<ll>v;
        for(auto now: st)v.pb(now);
        if(v.size()==1){cout<<2* (v[0])<<endl; continue;}

        n=v.size();

        ll pfix_gcd[n+5]={0} , sfix_gcd[n+5]={0};


        pfix_gcd[0]=v[0] , sfix_gcd[n-1]=v[n-1];

        fr1(i , n-1) pfix_gcd[i]=__gcd(pfix_gcd[i-1] , v[i] );
        for(i=n-2;i>=0;i--)  sfix_gcd[i]=__gcd(sfix_gcd[i+1] , v[i] );


        //fr(i , n)pf(pfix_gcd[i]);pn;
        //fr(i , n)pf(sfix_gcd[i]);pn;


        ans=max(sfix_gcd[1]+v[0]  , pfix_gcd[n-2]+v[n-1] );
        fr1(i, n-1)
        {
            ll gcd=__gcd(pfix_gcd[i-1] , sfix_gcd[i+1] );
            ans=max(ans , v[i] + gcd  );
        }

        cout<<ans;pn;
    }

return 0;
}

