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

#define N 100006
double x,y,c;

double calc( double n )
{
    double h1=sqrt((y*y) -  (n*n) );
    double h2=sqrt((x*x) - (n*n) );

    return (( h1*h2)/(h1+h2)) ;
}

int main()
{
    ll t;
      scl(t);
      tcas(i,t)
      {
      cin>>x>>y>>c;
      double l=0, h=min(x,y), mid;
      ll cnt=100;
      while(cnt--)
      {
          mid=(l+h)/2.0;
          if(calc(mid) <= c ) h=mid; else l=mid;
      }
      pcas(i);
      printf("%.10lf\n", l);
      }
return 0;
}




