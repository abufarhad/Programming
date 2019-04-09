
///nC0^nC1^........^nCn= n!/((n/2)!*(n/2)!)

#include<iostream>
using namespace std;
#define ll long long
long long M=1000000007;
long long f[100005];


long long bigm(long long b,long long p)
{
    if(p==0)
        return 1;
    if(p==1)
        return b;
    if(p%2==0)
    {
        long long c=bigm(b,p/2);
        return ((c%M)*(c%M))%M;
    }
    if(p%2==1)
    {
        return ((b%M)*bigm(b,(p-1)))%M;
    }
}
/*
ll bigm(ll N, ll POW)
{
  if(POW == 0)return 1;
  if(POW&1)return  ((N%M) * bigm(N, POW - 1)) % M;
  else{
    ll d = bigm(N, POW/2);
    return ((d%M) * (d%M)) % M;
  }
}
*/
int main()
{
    long long t,n,r,s,res,no=0;
    scanf("%lld",&t);

    f[1]=1;
    for(long i=2; i<100005; i++)
        f[i]=(i*f[i-1])%M;

    while(t--)
    {
        scanf("%lld",&n);
        if(n==0)cout<<"1"<<endl;
        else if(n&1)
           cout<<"0"<<endl;
        else
        {
            s=((f[n/2]%M)*(f[n/2]%M))%M;
            printf("%lld\n",(f[n]*bigm(s,M-2))%M);
        }
    }
    return 0;
}



