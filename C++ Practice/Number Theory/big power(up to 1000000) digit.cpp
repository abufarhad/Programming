#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll BigMod(ll a,ll b,ll m)
{
    if(b==0) return 1;
    if(b==1) return a%m;
    if(b%2==0)
    {
        ll c=BigMod(a,b/2,m);
        return (c*c)%m;
    }
    else
        {
            ll tmp=BigMod(a,b/2,m);
            tmp=(tmp*tmp)%m;
            return (tmp*a)%m;
        }
}

int main()
{
    ll m=1000000007,i,j,k,t;
    string s,s1;
    cin>>t;
    while(t--)
    {
    cin>>s>>s1;
    ll x=s.size();
    ll y=s1.size();

    ll tmp1=(s[0]-'0')%m;
    ll tmp2=(s1[0]-'0')%(m-1);

    for(i=1;i<x;i++)  tmp1=( 10*tmp1 +(s[i]-'0')) %m;
    for(i=1;i<y;i++)  tmp2=( 10*tmp2 +(s1[i]-'0')) %(m-1);

    //cout<<tmp1<<" "<<tmp2<<endl;

    ll ans=BigMod(tmp1, tmp2,m);
    cout<<ans<<endl;
    }
}
