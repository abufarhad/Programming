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
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    vector<ll>od,ev;

    ll cnt=0,ans=0,ans1=0,ans2=0,ans3=0;
    while(cin>>n)
    {
        ll  a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        dsort(a);
        unique(a,a+n);
        pfl(a[1]%a[0]);
    }


    return 0;
}





