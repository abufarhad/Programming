#include<iostream>
using namespace std;

long long M=1000000007;
long long f[1000005];


long long bigm(long long b,long long p)
{
    if(p==0)
        return 1;
    if(p==1)
        return b;
    if(p%2==0)
    {
        long long c=bigm(b,p/2);
        return c*c%M;
    }
    if(p%2==1)
    {
        return (b*bigm(b,(p-1)))%M;
    }
}
int main()
{
    long long t,n,r,s,res,no=0;
    scanf("%lld",&t);

    f[1]=1;
    for(long i=2;i<1000001;i++)
    f[i]=(i*f[i-1])%M;

    while(t--)
    {
        scanf("%lld%lld",&n,&r);

            if(n<r)
            {
                 printf("Case %d: 0\n",++no);
                 continue;
            }
            else if(n==r||r==0)
            {
                printf("Case %d: 1\n",++no);
                continue;
            }

        s=((f[n-r]%M)*(f[r]%M))%M;

        printf("Case %lld: %lld\n",++no,(f[n]*bigm(s,M-2))%M);
    }
    return 0;
}
