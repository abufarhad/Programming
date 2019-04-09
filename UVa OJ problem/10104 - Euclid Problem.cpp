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

ll extendeuclid(ll a,ll b, ll &x,ll &y )
{
    if(b==0)
    {
        x=1,y=0;
        return a;
    }
    ll x1, y1;
    ll tmp=extendeuclid( b, a%b, x1,y1);
    //cout<<x1<<" "<<y1<<endl;

    y=x1-(a/b)*y1;
    x=y1;

    return tmp;
}

int main()
{
    ll a,b;
    while(cin>>a>>b)
    {
        ll x,y,z;
        z=extendeuclid(a,b,x,y );
        printf("%lld %lld %lld\n", x,y,z);
    }

    return 0;
}
