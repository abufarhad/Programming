
#include<bits/stdc++.h>
#include<stdio.h>
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
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{
    ll i,j,m,n,x,y,cnt=0,cn=0;

    cin>>n;
    ll a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }

    for(i=0; i<n-1; i++)
    {
        if(a[0]==a[i+1]) cnt++;
        if(b[0]==b[i+1]) cn++;
    }

    //cout<<cnt<<" "<<cn<<endl;

    if(cnt==n-1||cn==n-1)
    {
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}
