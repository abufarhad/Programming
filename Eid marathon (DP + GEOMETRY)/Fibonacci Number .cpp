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
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
string mem[10003];

string add(string a, string b)
{
    string c,d;
    if(a.size()<b.size())
        swap(a,b);

    ll gap=a.size()-b.size();

    while(gap)
    {
        c+='0';
        gap--;
    }
    c+=b;       /// if a=122, b=12 then firstly gap=1 and c=0. And now c=012, a=122;

    ll len=a.size(), carry=0;
    for(ll i=len-1; i>=0; i--)
    {
        ll x=(a[i]-'0')+(c[i]-'0');
        x+=carry;
        carry=x/10;
        x%=10;
        d+=(x+'0');    ///converted to string
    }
    if(carry)
        d+=49;

    reverse(d.begin(), d.end());
    return d;
}
string dp(ll n)
{
    if(n==0)
        return "0";
    if(n==1)
        return "1";
    if(n==2)
        return "1";
    if(mem[n].size())
    {
        return mem[n];   ///For memoization ( For recursive way a way call multiple time so, to check if previously calculated or not the way, if yes then return otherwise calls.
    }
    return mem[n]=add(dp(n-1), dp(n-2));


}

int main()
{
    ll m,n,t,b,i,j,k,x,ans;

    cin>>n;

    if(n==0)
        cout<<"0"<<endl;
    else
        //printf("The Fibonacci number for %lld is ",n);
        cout<<dp(n+1)<<endl;


    return 0;
}

