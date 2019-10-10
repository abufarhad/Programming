#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll n;
    double a,b,c,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x;
        printf("%.6lf\n", ( acos(-1)*(x*x/4.0)  - (x*x/2.0)));
    }
}
