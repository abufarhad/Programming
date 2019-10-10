
///https://www.bbsmax.com/A/GBJrn1b3J0/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define pn                  printf("\n")
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)

int main()
{
    ll m,n,i,j,k,l;
    cin>>m;
    tcas(i,m)
    {
    cin>>n;
    j=sqrt(n), k=sqrt(n/2);
    pcas(i);
    cout<< n- k-j<<endl;
    }
}
