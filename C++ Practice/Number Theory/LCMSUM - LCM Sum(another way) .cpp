#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define lint long long

typedef unsigned long long ulint;
#define maxn 1000010

int phi[maxn];
lint f[maxn];
int t;
int n;

void initial()
{
    memset(phi, 0, sizeof(phi));
    phi[1] = 1;
    for(int i = 2; i < maxn; i++)
    {
        if(!phi[i])
        {
            for(int j = i; j < maxn; j += i)
            {
                if(!phi[j])
                {
                    phi [j] = j;
                }
                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }
    memset(f, 0, sizeof(f));
    f[1] = 1;
    for(int i = 2; i < maxn; i++)
    {
        for(int j = i; j < maxn; j += i)
        {
            f[j] += i*(lint)phi[i] / 2 * j;
        }
    }
    for(int i = 2; i < maxn; i++)
    {
        f[i] += i;
    }
}

int main()
{
    int m;
    initial();
    scanf("%d",&t);
    for (  m = 1; m <= t; m ++)
    {
        scanf("%d",&n);
        printf("%lld\n", f[n]);
    }
    return 0;
}
