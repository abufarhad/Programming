#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})



#define MAX 100000000
#define LIM 10000
int flagArr[MAX>>6];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31)))
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31)))
ll prime[MAX];
void BitSeive()
{
    register int i,j,k;
    for(i=3; i<LIM; i+=2)
    {
        if(!ifComp(i))
        {
            for(j=i*i,k=i<<1; j<MAX; j+=k)
                isComp(j);
        }
    }
    prime[0]=2;
    ll t=1;
    //printf("2 ");
    for(i=3,j=2; i<MAX ; i+=2 )
    {
        if(!ifComp(i))
        {
            prime[t++]=i;
            j++;
        }
    }
}
int main()
{
    BitSeive();
    ll n,cnt=0;
    cin>>n;
    for(ll i=0; i<=n; i++)
        cout<<prime[i]<<" ";

    return 0;
}
