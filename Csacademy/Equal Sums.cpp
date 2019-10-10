//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                  1<<28
#define N 1006
ll a[N][N];
ll r[N], c[N];
int main()
{

    ll m,n,t,b,d,i,j,k,x,y,z,l,q;

    ll cnt=0,ans=0;
    scl(n);
    fr(i,n)
    {
        fr(j,n)
        {
            cin>>a[i][j];
            r[i]+=a[i][j];
            c[j]+=a[i][j];
            // cout<<r[i]<<" - "<<c[j]<<endl;
        }
    }

    ll mx=-inf;
    fr(i,n)mx=max(mx, max(r[i], c[i]));
    //pfl(mx);

    fr(i,n)fr(j,n)
    {
        ll add=min( mx-r[i], mx-c[j] );
        r[i]+=add,c[j]+=add;
        a[i][j]+=add;
        cnt+=add;
    }

    fr(i,n)
    {
        fr(j,n)
        {
            cout<<a[i][j]<<" ";
        }
        pn;
    }
    return 0;
}
