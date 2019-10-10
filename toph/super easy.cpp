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
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)

vector<ll>v;

ll find_all_divisor(ll n)
{
    fr1(i,sqrt(n))
    {
        ll x;
        if(n % i == 0)
        {
            x = n / i;
            v.pb(i);
            if(i != x)
                v.pb(x);
        }
    }
}

#define N 100006

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(t);
    tcas(x,t)
    {
        scl(n);
        find_all_divisor(n);
        vasort(v);
       // fr(i, v.size())cout<<v[i]<<" ";
        //pn;
        b=v.size()/2;
        if(v.size()%2)ans=0;
        else
        ans= (v[b]-v[b-1]);
        printf("Case #%lld: ",x);
        pfl(ans);

        v.clear();
    }
    return 0;
}


