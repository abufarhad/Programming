#include<bits/stdc++.h>
using namespace std;

#define CLR(a,x) memset(a,x,sizeof(a))
#define PB push_back
#define INF 1000000000
#define MOD 1000000007
#define MP make_pair
#define tr(container , it) for(typeof(container.begin()) it=container.begin() ; it!=container.end() ; it++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define REP(i,a) FOR(i,0,a)
#define LLD long long
#define VI vector < int >
#define PII pair < int , int >

#define gi(x) scanf("%d",&x)
#define gl(x) scanf("%lld",&x)
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf("%s",x)

#define pis(x) printf("%d ",x)
#define pls(x) printf("%lld ",x)
#define pin(x) printf("%d\n",x)
#define pln(x) printf("%lld\n",x)
#define pds(x) printf("%.12f ",x)
#define pdn(x) printf("%.12f\n",x)
#define pnl() printf("\n")


vector<int> witness;
int sz=4;

LLD mulmod(LLD a, LLD b,LLD c)
{
    LLD x = 0,y=a%c;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x = (x+y)%c;
        }
        y = (y*2LL)%c;
        b /= 2;
    }
    return x%c;
}
LLD modulo(LLD a, LLD b, LLD c)
{
    LLD x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=mulmod(x,y,c);
        }
        y = mulmod(y,y,c);
        b /= 2;
    }
    return x%c;
}

bool Miller(long long p)
{
    if(p<2)
    {
        return false;
    }
    if(p!=2 && p%2==0)
    {
        return false;
    }
    long long s=p-1;
    while(s%2==0)
    {
        s/=2;
    }
    for(int i=0; i<sz; i++)
    {
        long long a=witness[i],temp=s;
        long long mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1)
        {
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0)
        {
            return false;
        }
    }
    return true;
}




bool isprime(LLD n)
{
    witness.PB(2);
    witness.PB(13);
    witness.PB(23);
    witness.PB(1662803);
    for(int i=0; i<sz; i++) if(n==witness[i])
            return true;
    for(int i=0; i<sz; i++) if(n%witness[i]==0)
            return false;
    return Miller(n);
}

int main()
{
    int t;
    gi(t);
    LLD n,k;

    while(t--)
    {
        gl(n);
        gl(k);

        if(n==1)
        {
            printf("No\n");
            continue;
        }

        if(k==1)
        {
            if(isprime(n))
                printf("Yes\n");
            else
                printf("No\n");
            continue;
        }
        if(k==2)
        {
            if(n<=3)
                printf("No\n");
            else if(n%2==0)
                printf("Yes\n");
            else
            {
                if(isprime(n-2))
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            continue;
        }
        if(k==3)
        {
            if(n>5)
                printf("Yes\n");
            else
                printf("No\n");
            continue;
        }
        if(k*2LL > n)
        {
            printf("No\n");
            continue;
        }
        printf("Yes\n");
    }
    return 0;
}
