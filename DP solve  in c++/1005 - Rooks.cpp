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
#define debug               cout<<"I am here "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define conv_string(n)	to_string(n)
ll dp[31][31];
bool keep[31][31];
ll n, k;

bool check(ll j)
{
    fr(i, n)
    {
        if(keep[i][j])return false;
    }
    return true;
}


ll solve(ll pos, ll  bsaichi )
{
    if(k>n)return 0;
    ll ans=0;

    ll  &ret=dp[pos][bsaichi];

    if(bsaichi==k) return 1; ///<<----
    if(pos>=n)return 0;

    if( ret !=-1 )return ret;

    fr(i, n)
    {
        //cout<<i<<" -> I am here "<<endl;
        if(check(i))
        {
            //cout<<pos<<" ---fst--- "<< bsaichi<<" "<<ans<<endl;
            keep[pos][i]=true;
            ans+=solve(pos+1, bsaichi+1);
            keep[pos][i]=false;     ///<<----
        }
    }

    //cout<<pos<<" ---scnd--- "<< bsaichi<<" "<<ans<<endl;

    ans+=solve(pos+1, bsaichi);  ///<<----
    ret=ans;

    return ret;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
     mem(keep, false);
     mem(dp, -1);

    cin>>n>>k;

    ll ans=solve(0, 0);
    pcas(cs);
    cout<<ans<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

