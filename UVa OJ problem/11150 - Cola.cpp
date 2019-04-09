#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define pfl(x) printf("%lld\n",x)
#define ll long long
int main()
{

    ll m,n,t,a,b,c,d,i,j,k,x,y,z,ans;
    ans=0,k=0;
    while(cin>>n)
    {
        ans=n;

/// ************ o(1) solution **********
        /// ans=n+n/2;
        /// ans=(n*3-1)/2;

/// **** straight Forward method or brute force method ****
        while(n>2)
        {
            ans+=n/3;
            n=n/3+n%3;
        }
        if(n==2) ans++;
        pfl(ans);
    }
    return 0;
}
