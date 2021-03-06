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
ll n;

ll marge(ll a[], ll st, ll mid , ll en )
{
    ll p=mid-st+1  , q=en-st , k=0;

    ll L[p] , R[q];

    fr(i , p)L[i]=a[st+i];
    fr(i , q)R[i]=a[mid+1+i];

    ll i=0, j=0;
    k=st;

    while(i<p and j<q)
    {
        if(L[i]<R[j] ) a[k]=L[i] , i++;
        else a[k]=R[j] , j++;
        k++;
    }


    while(i<p)
    {
        a[k]=L[i];
        i++, k++;
    }
    while(j<q)
    {
        a[k]=R[j];
        j++, k++;
    }
}


ll marge_sort(ll a[] , ll st, ll en)
{
    if(st>=en)return 0;

    ll mid=(st+en)/2;
    marge_sort(a, 0, mid);
    marge_sort(a, mid+1, en);

    marge(a, st, mid, en);
}

int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];

        fr(i,n)cin>>a[i];

        marge_sort(a, 0, n-1);

        fr(i , n)pf(a[i] );
        //cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

