
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pn                   printf("\n")

#define N 1000006

unsigned ll hsh[N];
ll base=97;
char s[N] , s1[N];

int main()
{
    //fast;
    ll i, j, n;
    while(cin>>n)
    {
     ll cnt=0,sum=0;
     scanf("%s",s1);
     scanf("%s",s);

    ll l1=strlen(s);
    ll l2=strlen(s1);
     //cout<<s<<" "<<s1<<endl;

    ll b=1;
    for(i=1; i<=l1; i++)
    {
        hsh[i]=hsh[i-1]+(s[i-1]*b );
        b*=base;
    }

    b=1;
    for(i=1; i<=l2; i++)
    {
        sum+= s1[i-1]*b;
        b*=base;
    }

    b=1;
    for(i=1 ; i+l2-1 <=l1; i++)
    {
        if(hsh[i+l2-1 ] - hsh[i-1] == sum*b )printf("%lld\n" ,i-1) , cnt++;
        b*=base;
    }
    if(!cnt)pn;
    pn;

    //cout<<ans<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




