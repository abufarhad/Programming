#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define size 1000000
#define scl(x) scanf("%lld",&x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)

ll phi[size+1]; //global
unsigned long long arr[size+1];

void euler_phi()
 { //Seive to build the array that stores phiient values
    phi[1] = 1;
    for(int i=2; i<size; i++)
    {
        if( !phi[i] )
        {
            phi[i] = i-1;
            for(int j=(i<<1); j<=size; j+=i)
            {
                //cout<<"i =" <<i<<" "<<"J= "<<j<<endl;
                if(!phi[j]) phi[j] = j;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
     for(int i=2;i<=size;++i)
       phi[i]+=phi[i-1];
}

int main()
{
    ll t,n,a,b,l,r;
    euler_phi();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",phi[n]*phi[n]);

    }

    return 0;
}



/*
#define MAXN 3000000
int phi[MAXN + 1], prime[MAXN/10], sz;
bitset <MAXN + 1> mark;

void euler_tot(){
for (int i = 2; i <= MAXN; i++ )
{
    if(!mark[i])
    {
        phi[i] = i-1;
        prime[sz++]= i;
    }
    for (int j=0; j<sz && prime[j]*i <= MAXN; j++ )
    {
        mark[prime[j]*i]=1;
        if(i%prime[j]==0)
        {
            phi[i*prime[j]] = phi[i]*prime[j];
            break;
        }
        else phi[i*prime[j]] = phi[i]*(prime[j]-1 );
    }
}

}
*/
