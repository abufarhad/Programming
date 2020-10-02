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

void mx_heapify(ll a[] , ll n , ll i)
{
    ll largest=i;
    ll left=2*i+1 , right=left+1 ;

    if(left<n  and a[left] > a[largest] )largest=left;
    if(right<n  and a[right] > a[largest] )largest=right;

    if(largest != i)
    {
        swap(a[i]  , a[largest]);
        mx_heapify(a, n , largest);
    }
}


void Heap_sort(ll a[] , ll n)
{
    ll i;
    for(i=n/2 -1 ; i>=0; i--) mx_heapify(a, n , i);

    for(i=n-1 ; i>=0; i--)
    {
        swap(a[0] , a[i]);
        mx_heapify(a, i , 0);
    }

    cout<<"Heap Sorting Done "<<endl;
    fr(i , n)cout<<a[i]<<" ";pn;
}


int main()
{
    ll n , i , j , m, t;

    cin>>n;
    ll a[n];
    fr(i , n)scl(a[i]);

    Heap_sort(a, n);
return 0;
}
