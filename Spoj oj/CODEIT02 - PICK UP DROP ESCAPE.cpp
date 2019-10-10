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
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
ll max_xor(ll *a, ll mx,ll n, ll k)
{

    if(k==0)return mx;
    if(n==0)return 0;
    ll x=max_xor(a+1, mx, n-1, k);
    //cout<<"Now->   " <<x<<endl;
    ll y=max_xor(a+1, mx^(*a),n-1, k-1);
    //cout<<x<<" "<<y<<endl;
    return max(x,y);

}


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(t);
      tcas(x,t)
      {
      scl(n);scl(k);
      ll  a[n];
      fr(i,n)cin>>a[i];

      ans=max_xor(a, 0,n, k);
      pfl(ans);
      }

return 0;
}




