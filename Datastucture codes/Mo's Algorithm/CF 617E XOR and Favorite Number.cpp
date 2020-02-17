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

ll a[N], freq[1<<20], ans[N];
ll block=sqrt(N),   res, k;
struct query
{
    ll l, r, id;
};

query q[N];
bool cmp(query a, query b)
{
    if(a.l/block != b.l/ block)return a.l/block < b.l/ block;  //sort by block
    return a.r<b.r;
}

void add(ll pos)
{
    ll v=a[pos];
    res+=freq[v^k];
    freq[v]++;
}

void rmv(ll pos)
{
    ll v=a[pos];
    freq[v]--;
    res-=freq[v^k];
}


int main()
{
    ll m,n,i,j;
    cin>>n>>m>>k;

    fr1(i, n)cin>>a[i], a[i]^=a[i-1];

    fr(i, m)
    {
        cin>>q[i].l>>q[i].r;

        q[i].id=i;
    }

    ll currL=0,
    currR=-1;           ///In case of first time increase right or ++currR

    sort(q, q+m, cmp);


    fr(i,m)
    {
       ll l=q[i].l, r=q[i].r;
       l--;                   //in case a[0....n]

       while(currL < l)rmv(currL++) ;

       while(currL > l) add(--currL);

       while(currR <r) add(++currR);

       while(currR >r)rmv(currR--);

       ans[ q[i].id ]=res;
    }

    fr(i, m)cout<<ans[i]<<endl;
}
