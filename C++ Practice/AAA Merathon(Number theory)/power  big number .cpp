///big number power ---->>>

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
typedef unsigned long long uint64;

uint64  PowMod(uint64 x, uint64 e, uint64 mod)
{
    uint64 res;
    if (e == 0)
    {
        res = 1;
    }
    else if (e == 1)
    {
        res = x;
    }
    else
    {
        res = PowMod(x, e / 2, mod);
        res = res * res % mod;
        if (e % 2)
            res = res * x % mod;
    }
    return res;
}

using namespace std;
int main()
{
    long long int p,q,y;
    cin>>p>>q;
//        stringstream geek1(p);   stringstream geek2(q);
//        long long x=0,x1=0;
//        geek1>>x; geek2>>x1;
    y=PowMod(p,q,1000000007);
    // y=PowMod(p,q,10e9+7);
    // y=mod(p,q,1000000007);
    cout<<y<<endl;
    return 0;
}



//long long  mod(long long int z,long long int i,long long int k)  {
//    if(i==1)  {
//        return z%k;    }
//    if(i%2==0) {
//        return ((mod(z,i/2,k)%k)*(mod(z,i/2,k)%k))%k;  }
//    else    {
//        return ((((z%k)*(mod(z,i/2,k)%k)*(mod(z,i/2,k)%k))%k)%k);  }   }

///............
/*
unsigned long long int fastspcexp(unsigned long long int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return (((fastspcexp(n/2))*(fastspcexp(n/2)))%1000000007);
    else
        return ( ( ((fastspcexp(n/2)) * (fastspcexp(n/2)) * 2) %1000000007 ) );
}
*/
