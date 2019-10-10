#include <bits/stdc++.h>

using namespace std;

int phi[10005], mark[10005];

void seivePhi(int n)
{
    for(int i=2; i<=n; i++) phi[i] = i;

    for(int i=2; i<=n; i++)
        if(!mark[i])
            for(int j=i; j<=n; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }
}
int main()
{
    int n;
    scanf("%d", &n);
    seivePhi(n);
    for(int i=1; i<=n; i++)
        printf("Number of Coprime for %4d is %4d\n", i, phi[i]);
    return 0;
}
