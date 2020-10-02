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
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 100006

int main()
{
    fast;
    ll t;

    ll m,n,b,d,i,j,k,x,y,z,l,q;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;

    cin>>n>>m>>k;
    char a[n][m];

    fr(i, n)fr(j, m)cin>>a[i][j];

    ll r[n] , c[m];
    mem(r, 0) , mem(c, 0);

    //

    if(k>1)
    {

    fr(i, n)
    {
        cnt=1;
        fr1(j, m-1)
        {
        if(a[i][j-1]=='.' and a[i][j-1]==a[i][j])cnt++;
        else { if(cnt>=k){ans+=(cnt-k+1 ); }; cnt=1;}
        }
        if(cnt>=k) ans+=cnt-k+1;
    }

    fr(i, m)
    {
        cnt=1;
        fr1(j, n-1)
        {
        if(a[j-1][i]=='.' and a[j-1][i]==a[j][i])cnt++;
        else { if(cnt>=k){ans+=(cnt-k+1 ); }; cnt=1;}
        }
        if(cnt>=k) ans+=cnt-k+1;
    }

    }
    else
    {
        fr(i, n)fr(j, m)if(a[i][j]=='.')r[i]++;
        fr(i,  n) ans+=(r[i]-k+1);
    }

    cout<<ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




