
///big number power ---->>>

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

long long  lst(long long int z,long long int i,long long int k)
{
    if(i==1)
    {
        return z%k;
    }
    if(i%2==0)
    {
        return ((lst(z,i/2,k)%k)*(lst(z,i/2,k)%k))%k;
    }
    else
    {
        return ((z%k)*(lst(z,i/2,k)%k)*(lst(z,i/2,k)%k))%k;
    }
}

using namespace std;
int main()
{
    long long int i,z,p,d,y,tst,dd,zz,q,t,m;
    double s,intpart,f;
    scanf("%lld%lld",&p,&q);

    z=p;
    zz=q;
    y=lst(2,zz,10000007);

    printf("%lld\n",y);
    return 0;
}



