
///------UnFinished---- :(

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    map<ll,ll>mp;
    ll m,i,z=0,n,p,a[1000];
    for(i=1; i<=8; i++)
    {
        cin>>a[i];
        z+=a[i];
        mp[i ]=a[i];
    }
   // cout<<z<<endl;
    ll ans=z, x,y,k=0,total;
    cin>>p;
    while(p--)
    {
        cin>>x>>y;
        ans-=min(mp[x], mp[y]);
        //total=z-ans;
         //cout<<ans<<" ";
    }
    cout<<ans<<endl;

}
