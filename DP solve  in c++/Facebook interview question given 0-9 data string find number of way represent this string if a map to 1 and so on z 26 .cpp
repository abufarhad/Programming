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
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

ll calculate(string s, ll k, ll memo[])
{
    if(k==0)return 1;
    ll n=s.size()-k;
    if(s[n]=='0')return 0;
    if(memo[k] !=-1) return memo[k];

    ll res=calculate(s , k-1,memo );

    if(k>=2 and s[n]-'0'<=2 and s[n+1]-'0'<=6 ){cout<<s[n]-'0' <<" "<<s[n+1]-'0'<<endl; res+=calculate(s, k-2,memo);}
    memo[k]=res;

    return res;
}

ll number_of_ways(string s)
{
    ll memo[s.size()+1];
    fr(i,s.size()+1)memo[i]=-1;

    return calculate(s, s.size(),memo);
}

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    string s;
    cin>>s;

    pfl(number_of_ways(s));

return 0;
}





