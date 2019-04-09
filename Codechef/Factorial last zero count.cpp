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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)

ll calc_zero(ll n)
{
    ll p=5,cnt=0;
    while(n>=p)
    {
        cnt+=n/p;
        p*=5;
    }
    return cnt;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(t);
      while(t--)
      {
          scl(n);
          ans=calc_zero(n);
          pfl(ans);
      }


return 0;
}




