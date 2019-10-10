#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define  pmn            puts("-1");

typedef pair<ll,ll> iPair;
ll pr[200001];

ll pfind(ll x)
{
    if(pr[x]==x)  return x;
    return pr[x]= pfind(pr[x]);
}

void  unionmake(ll x,ll y)
{
    ll p=pfind(x);
    ll q=pfind(y);

    pr[q]=p;
}

int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=n; i++) pr[i]=i;

    for(ll i=0; i<m; i++)
    {
        ll a,b;
        cin>>a>>b;
        unionmake(a,b);
    }
    ll q;

    cin>>q;
    for(ll i=0; i<q; i++)
    {
        ll a,b;
        cin>>a>>b;
        if(pfind(a)==pfind(b))   cout<<"YES"<<endl;

        else  cout<<"N0"<<endl;
    }
}
