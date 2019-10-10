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
#define endl 	    "\n"
#define pb                  push_back
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

double l,n,c, l1,x;
double calc( double mid)
{
     c=l/2.0;
     return  ( ((c*c )/(2*mid) +(mid/2.0) ) *(2* asin( c/( ((c*c )/(2*mid) +(mid/2.0) )  ) ) ));
}
int main()
{

    ll t;
     scl(t);
     tcas(i,t)
     {
      ll cnt=100,ans=0;

      cin>>l>>n>>c;
      l1=(1.0 + n*c)*l;

       double low=0, high=l, mid;
       while(cnt--)
       {
           mid=(low+high)/2.0;
           if(calc(mid) >= l1)high=mid; else low=mid;
       }
       pcas(i);
       printf("%.8lf\n", mid);

       }
return 0;
}




