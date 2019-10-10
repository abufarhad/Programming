#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
#define pn                  printf("\n")

ll multiply(ll x, ll res[], ll sz)
{
    ll carry=0,prod;
    fr(i,sz)
    {
        prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    //put the carry into the result array
    while(carry)
    {
        res[sz]=carry%10;
        carry/=10;
        sz++;
    }
    return sz;
}


void factorial(ll n)
{
    ll res[500];
    res[0]=1;
    ll sz=1,i;
    for(i=2;i<=n; i++) sz=multiply(i, res, sz);
    for(i=sz-1; i>=0;i--)cout<<res[i];
    pn;
}

int main()
{
    ll i,j,k, n;
    //while(cin>>n) factorial(n);
    cin>>k;
    while(k--)cin>>n,factorial(n);
}
