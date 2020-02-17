#include<bits/stdc++.h>
using namespace std;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define ll long long
ll fac(ll n)
{
    ll ans=1;
    fr1(i,n)  ans*=i;
    return ans;
}
int main()
{
    ll m,n,i,j,k,t;
    cin>>t;
    while(t--)
    {
       ll cnt[15]={0};
       string s;  ll y;
       cin>> s>>y;

       fr(i, s.size())cnt[ s[i]-'0' ]++;
       ll ans=fac(s.size() );
       ans/= fac(s.size()-y );

       ll tmp=0;
       if(cnt[0] >0)
       {
           cnt[0]--;
           ll cn=1;
            tmp=fac(s.size()-1);

            fr(i, 9)
            {
                cn*=fac(cnt[i]);
            }
            cout<<tmp<<" "<<cn<<endl;
            ans-=tmp/cn;
       }
       cout<<ans<<endl;
    }
}
