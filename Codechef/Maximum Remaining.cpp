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
    scl(n);
    ll  a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0 && a[i]!=0)ev.pb(a[i]);
        else  od.pb(a[i]);
    }
    vasort(od);
    vasort(ev);



    if( od.size()>1 && ev.size()>1) ans1= max(od[od.size()-1]%ev[ev.size()-1], ev[ev.size()-1]%od[od.size()-1]  );   //mx_od vs mn_ev

    if( od.size() >1) ans2=  od[od.size()-2]%od[od.size()-1]  ;

    if( ev.size() >1) ans3= ev[ev.size()-2]%ev[ev.size()-1]  ;


    ans=max(ans1, ans2);
    ans1=max(ans, ans3);

    pfl(ans);



    return 0;
}





