//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)

ll cnt[10000005], pre[10000005], pri[10000005],i,j,m;

void pre_calc()
{
    /*   ......................precalculation.................................*/

    for(i=4; i<=10000000; i+=2)
    {
        pri[i]=1;
        pre[2]+=cnt[i];
    }

    m=sqrt(double(10000000.00));
    //pfl(m);

    for( i=3; i<=m; i+=2)
    {
        if(pri[i]==0)
        {
            for( j=i; j<=10000000; j+=i)
            {
                pre[i]+=cnt[j];
            }

            for(j=i*i; j<=10000000; j+=2*i)
            {
                pri[j]=1;
            }
        }
    }

    if(m%2==0)
        m++;
    for( i=m; i<=10000000; i+=2)
    {
        if(pri[i]==0)
        {
            for( j=i; j<=10000000; j+=i)
            {
                pre[i]+=cnt[j];
            }
        }
    }

    for( i=2; i<=10000000; i++)
    {
        pre[i]=pre[i]+pre[i-1];
    }

    /*   ..........................Done.............................*/
}

int main()
{
    ll n,k,l,u,t,x,r,q;
    ll ans=0;
    scl(n);
    for(i=0; i<n; i++)
    {
        cin>>x;
        cnt[x]++;
    }
    pre[2]+=cnt[2];

    pre_calc();


    scl(q);
    while(q--)
    {
        cin>>l>>r;
        if(l>10000000) pfl(ans);
        else
        {
            if(r>10000000) r=10000000;
            cout<<pre[r]-pre[l-1]<<endl;
        }
    }

    return 0;
}
