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
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

#define N 100006
struct query
{
    ll l, r, i;
};

query q[200001];
ll ar[30001],  ans[200001], freq[1000001];
ll cnt=0, block=sqrt(30001);

bool cmp(query a, query b)
{
    if(a.l/ block  != b.l/ block)
        return a.l < b.l ;

    return a.r<b.r;
}

void add(ll pos)
{
    freq[ar[pos] ]++;

    if(freq[ar[pos] ]==1)cnt++;
}

void Remove(ll pos)
{
    freq[ar[pos] ]--;

    if(freq[ar[pos] ]==0)cnt--;
}



int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,qu,r;
    cin>>n;



    fr(i,n)cin>>ar[i];
    cin>>qu;
    fr(i,qu)
    {
        cin>>q[i].l >>q[i].r;
        q[i].i=i, q[i].l--, q[i].r--;
    }


   // pn;
    sort(q, q+qu, cmp);

//    fr(i, qu)
//    {
//        cout<<q[i].l<<" "<<q[i].r<<endl;
//    }

    ll ML=0, MR=-1;

    fr(i, qu)
    {
        ll l=q[i].l,    r=q[i].r;

        while(ML> l) ML--, add(ML);

        while(MR< r) MR++, add(MR);

        while(ML< l) Remove(ML), ML++;

        while(MR> r) Remove(MR), MR--;


        ans[ q[i].i ]= cnt;
    }

    fr(i,qu)cout<<ans[i]<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

