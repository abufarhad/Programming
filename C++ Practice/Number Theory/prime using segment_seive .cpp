#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

bool nP[100005];
int primes[5200], i, j, primeCnt;
ll start, l, r;

void sieve(int n)
{
    int lim = sqrt(n);
    for(i = 2; i <= lim; i++)
    {
        if(!nP[i])
        {
            for(j = i + i; j <= n; j+=i)  nP[j] = true;
        }
    }
    j = 0;
    for(i = 2; i <= n; i++)
    {
        if(!nP[i])
        {
            primes[primeCnt++] = i;
        }
    }
}

void clear(int n)
{
    for(i = 0; i <= n; i++) nP[i] = false;
}

int countPrime()
{
    clear(r - l + 1);
    if(l == 1) nP[0] = true;

    for(i = 0; i < primeCnt; i++)
    {
        start = (l / primes[i]);
        if(start * primes[i] != l)    start++;

        if(start > 1)    start = start * primes[i];
        else    start = start * primes[i] + primes[i];

        for(j = start; j <= r;)
        {
            nP[j - l] = true;
            if(r - j >= primes[i])    j += primes[i];
            else       break;
        }
    }

    j = 0;
    r -= l;

    for(i = 0; i <= r; i++)  if(!nP[i])  j++;
    return j;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    sieve(50000);
    int test, caseno = 1;
    sci(test);

    while(test--)
    {
        scl(l), scl(r);

        printf("Case %d: %d\n", caseno++, countPrime());
    }

    return 0;
}
