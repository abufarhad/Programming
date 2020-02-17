#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define rep(i,j,n)   for(ll i=j;i<n;i++)
#define scn(a)       scanf("%lld",&a)
#define nl	         printf("\n")
#define scns(a,b)    scanf("%lld %lld",&a,&b)
#define print(a)     printf("%lld",a)
#define tc           ll t; scn(t); while(t--)
#define vec          vector<ll>
#define pb           push_back
#define pairs        pair<ll,ll>
#define f            first
#define s            second
#define all(v)       v.begin(),v.end()
#define srt(v)       sort(v.rbegin(),v.rend())
#define mem(a,b)     memset(a,b,sizeof(a))
#define im           int main()
#define maxx         20005
#define inf          LLONG_MAX
#define zer          LLONG_MIN
ll mod=1e9+7,n,q,a[maxx];
ll freq[maxx],ans[maxx],bit[maxx+5];
ll sum=0,maxim;
ll blocks;

struct type
{
    ll l,r;
    ll ind;
};
type query[maxx];

void update(ll ind,ll val)
{
    while(ind<=n)
    {
        bit[ind]+=val;
        ind+=ind&(-ind);
    }
}
ll getsum(ll ind)
{
    ll sum=0;
    while(ind>0)
    {
        sum+=bit[ind];
        ind-=ind&(-ind);
    }
    return sum;
}
bool comp(type a,type b)
{
    if(a.l/blocks!=b.l/blocks)
        return a.l<b.l;

    return a.r<b.r;
}
void giveindex()
{
    set<ll>s1;
    map<ll,ll>m1;
    ll counts=1;

    rep(i,1,n+1)
    s1.insert(a[i]);
    maxim=s1.size();

    while(!s1.empty())
    {
        ll val=*s1.begin();
        m1[val]=counts++;
        s1.erase(val);
    }
    rep(i,1,n+1)
    a[i]=m1[a[i]];
}

void mos_algo()
{
    blocks=(ll)sqrt(n);
    sort(query,query+q,comp);
    ll cl,cr,sum=0;
    cl=cr=1;
    giveindex();

    rep(i,1,q+1)
    {
        ll l=query[i].l;
        ll r=query[i].r;
        ll ind=query[i].ind;

        while(cl<l)
        {
            sum-=getsum(a[cl]-1);
            update(a[cl],-1);
            cl++;
        }
        while(cl>l)
        {
            sum+=getsum(a[cl-1]-1);
            update(a[cl-1],1);
            cl--;
        }
        while(cr<=r)
        {
            sum+=getsum(maxim)-getsum(a[cr]);
            update(a[cr],1);
            cr++;
        }
        while(cr>r+1)
        {
            sum-=getsum(maxim)-getsum(a[cr-1]);
            update(a[cr-1],-1);
            cr--;
        }
        ans[ind]=sum;
    }
}
im
{
    scn(n);
    rep(i,1,n+1)
    scn(a[i]);

    scn(q);
    rep(i,1,q+1)
    {
        ll l,r;
        scns(l,r);
        query[i].l=l;
        query[i].r=r;
        query[i].ind=i;
    }
    mos_algo();

    rep(i,1,q+1)
    {
        print(ans[i]);
        nl;
    }
}
