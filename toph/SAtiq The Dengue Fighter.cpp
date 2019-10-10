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
int main()
{
    ll n;
    cin>>n;
    if(n==1)cout<<1<<endl;
    else if(n>3)
    {
        if(n%2)cout<<3<<endl;
        else cout<<2<<endl;
    }
    else cout<<2<<endl;
}
