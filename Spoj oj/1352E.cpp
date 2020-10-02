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

#define N 8005
ll cnt[N];
ll vis[N];

int main()
{
    ll t;
    cin>>t;
    mem(vis, -1);
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cn=0,ans=0,sum=0 ;
    cin>>n;

    ll a[n];
    ll mx=-1;

    fr(i,n)cin>>a[i], vis[a[i]]=1 , mx=max(mx, a[i] ) , cnt[a[i] ]++;


    fr(i, n)
    {
        sum=a[i];
        for(j=i+1;j<n;j++)
        {
            sum+=a[j];
            if(sum>mx)break;
            if(vis[sum] ==1) ans++ , vis[sum]=0 ;
        }
    }


    fr(i, n)  if(cnt[a[i] ] >1)if(vis[a[i] ]==0 )cn+=cnt[a[i] ]-1 , cnt[a[i] ]=0;

    fr(i, n)vis[a[i] ]=-1, cnt[a[i] ]=0;


    cout<<ans+cn;pn;
    }

return 0;
}

///***************Before submit*****************

///    ****Please check all base case output***
///    *check for integer overflow,array bounds
///    *check for n=1


