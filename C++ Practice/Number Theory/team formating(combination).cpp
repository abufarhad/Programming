#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ncr(ll n)
{
    if(n<=0) return 0;
    else
    return (n*(n-1)*(n-2))/6;
}


int main()
{
    ll m,n,i,l;
    ll result,r,r1,rm,rm1,res,res1;
    cin>>l;
    for(i=1;i<=l;i++)
    {
        cin>>m>>n;
        r=ncr(m);
        r1=ncr(n);
        result=r+r1;
        printf("Case %lld: %lld\n",i,result);
    }
}
