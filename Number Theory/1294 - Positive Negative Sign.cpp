//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": ";

/*
consider n=12, m=3;
we can write this this form -
-1+4  , -2+5, -3+6, -7+10, -8+11, -9+12

we can see here there are n/2 factor , and every time we get n/2 factor in case told in the problem
n is divisible by 2m .

so, just think about this we can write (n/2)*m

*/


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m, n, i, j;
    cin>>n>>m;

    ll ans=(n/2)*m;
    pcas(cs);
    cout<<ans<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

