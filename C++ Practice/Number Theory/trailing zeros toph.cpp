#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int trailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}

ll binarysearch(ll x)
{
    int lo = 0 , hi = x * 10 , ans = - 1 , mid;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(trailingZeros(mid)==x)
        {
            ans = mid;
            hi = mid-1;
        }
        else if(trailingZeros(mid)>x)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return ans;
}

int main()
{
    ll n,m,i,l,k,res;
    cin>>l;
    for(i=1; i<=l; i++)
    {
        cin>>n;
       // cout<<binarysearch(n)<<endl;
        m=binarysearch(n);
        if(m==-1)
            printf("Case %lld: Go Home! You are drunk!\n",i);
        else
            printf("Case %lld: %lld\n",i,m);
    }
}
