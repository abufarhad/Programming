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

void Bubble_sort(ll a[] )
{
    ll i , j, cnt=0;
    fr(i , n)
    {
        bool swaped=true;
        for(j=0 ; j<n-i-1; j++) // Last i elements are already in place
        {
            if(a[j] > a[j+1] )swaped=false ,  swap(a[j+1] , a[j] );
        }
        cnt++;
        if(swaped)break;
    }

    pfl(cnt);
    fr(i , n)pf(a[i]);

}

void Insertion_sort(ll  a[]  )
{
    ll cnt=0;
    fr1(i , n-1)
    {
        ll key=a[i];
        ll j=i-1;
        while(j>=0  and key< a[j])
        {
            cnt++;
            a[j+1 ]= a[j];
            j--;
        }

        a[j+1]=key;
    }

    pfl(cnt);
    fr(i , n)pf(a[i]);
}
void Selection_sort(ll a[])
{
    ll x;
    fr(i , n)
    {
        ll mn_indx=i;
        for(ll j=i+1; j<n; j++)
        {
            if(a[mn_indx]> a[j] )  mn_indx=j;

        }

        swap(a[i] , a[mn_indx] );
    }

    fr(i , n)pf(a[i]);
}
int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];

        fr(i,n)cin>>a[i];

        //Bubble_sort(a);
        //Insertion_sort(a);
        Selection_sort(a);

       // cout<<ans;pn;
    }

return 0;
}

/*
3

5
1 5 3 2 4

5
5 4 3 2 1
*/
