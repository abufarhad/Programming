#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long

ll gcd ( ll a,  ll b)
{
    ll x;
    while (b)
    {
        x = a % b;
        a = b;
        b = x;
    }
    return a;
}

ll mul_inv(ll a, ll m)
{
    a = a%m;
    for (int x=1; x<m; x++)
        if ((a*x) % m == 1)
            return x;

}

int  main(void)
{
    ll m,n,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&m);
        if(gcd(2,m)==1){
         n=mul_inv(2, m);

            printf("%lld\n",n);}
        else printf("-1\n");
    }
    return 0;
}

