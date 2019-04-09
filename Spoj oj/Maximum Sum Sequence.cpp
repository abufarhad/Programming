//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)

#define Pi               2*acos(0.0)
#define ms(a,b)       memset(a, b, sizeof(a))
#define EPS           10E-10
#define ff              first
#define ss              second
#define sqr(x)        (x)*(x)



ll v[5005];

ll max_subarray( ll n)
{
    ll ans=-1000000, curr_max=0;
    for(ll i=0; i<n; i++)
    {
        curr_max=max(v[i], curr_max+v[i]);
        ans=max(ans, curr_max);
    }
    return ans;
}



int main()
{

    ll m,n,t,b,c,d,i,j,k,x=0,y,z;
    while(1)
    {
        cin>>n;
        if(n==0) return 0;
        else
        {
            for(i=0; i<n; i++)
            {
                cin>>v[i];
            }
            cout<<max_subarray( n )<<endl;
            for(i=0; i<n; i++) v[i]=0;
        }
    }

    return 0;
}
