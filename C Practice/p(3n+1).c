#include<stdio.h>
int main()
{
    long long n,N,l,r,res=0,count=0;
    while(scanf("%lld%lld",&l,&r)==2)
    {
        res=0;
        for(n=l;n<=r||n>=r;n++)
        {
            count=0;
            N=n;
    while(1)
    {
        count++;
        if (N==1)
            break;
        if(N%2==1)
            N=3*N+1;
        else
            N=N/2;
    }
    if (count >res) res=count;
        }
    printf("%lld %lld% lld\n",l,r,res);}

return  0;}
