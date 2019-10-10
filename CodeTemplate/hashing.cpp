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
#define ps printf(" ") #define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

ll bigmod(ll b,ll p,ll m)
{
    if(p==0)
        return 1;
    if(p==1)
        return b%m;
    if(p%2)
    {
        return (bigmod(b,p-1,m)*b)%m;
    }
    ll c=bigmod(b,p/2,m);
    return ((c%m)*(c%m))%m;
}
struct valuesOfExEU
{
    ll x,y,gcd;
};
valuesOfExEU extendedEuclid(ll a,ll b)
{
    if(b==0)
    {
        valuesOfExEU temp;
        temp.gcd=a;
        temp.x=1;
        temp.y=0;
        return temp;
    }
    valuesOfExEU temp=extendedEuclid(b,a%b);
    ll t=temp.x;
    temp.x=temp.y;
    temp.y=t-temp.y*(a/b);
    return temp;
}

ll modInverse(ll n,ll mod)
{
    valuesOfExEU ans=extendedEuclid(n,mod);
    return (ans.x+mod)%mod;
}

char data[1000005];
char pattern[1000005];
ll inverse[1000001];
ll prefix[1000005];


int main()
{
    //freopen("input.txt","r",stdin); //freopen("output.txt","w",stdout);
    int caseno=1;
    ll p=100184533, mod=2367362131;
    int test;
    sci(test);
    ll curr=1;
    for(int i=0; i<=1000000; i++)
    {
        inverse[i]=modInverse(curr,mod);
        curr=(curr*p)%mod;
    }
    while(test--)
    {
        scanf(" %s",data);
        scanf(" %s",pattern);
        printf("%s %s\n",data,pattern );
        int n=strlen(data);
        ll power=1;
        for(int i=1; i<=n; i++)
        {
            power=(power*p)%mod;
            cout<<power<<endl;
            prefix[i]=(prefix[i-1]+(data[i-1]*power))%mod;
            cout<<prefix[i]<<endl;
        }
        int m=strlen(pattern);
        power=1;
        ll val=0;
        for(int i=1; i<=m; i++)
        {
            power=(power*p)%mod;
            val=(val+(pattern[i-1]*power))%mod;
        }
        int l=n-m+1;
        int ans=0;
        for(int i=1; i<=l; i++)
        {
            ll curr=prefix[i+m-1]-prefix[i-1];
            curr=((curr*inverse[i-1])%mod+mod)%mod;
            cout<<val<<' '<<curr<<endl;
            if(curr==val)
                ans++;
        }
        pfc(caseno);
        printf("%d\n", ans);
    }
    return 0;
}
