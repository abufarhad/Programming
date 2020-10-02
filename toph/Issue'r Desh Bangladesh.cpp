
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100+1];
int main()
{
    string s,s1;
    map<ll,string>mp;
    ll i,m,k,x,y,n;
    cin>>x>>y;
    ll mx=-1;

    for(i=1; i<=y; i++)
    {
        cin>>s>>a[i];
        mx=max(mx, a[i] );
        if(mx<=a[i] )
        {
            mp[i]=s;
            s1=mp[i];
        }
        else mp[i ]=s1;

        cout<<"Day "<<i<<": "<<mp[i]<<endl;
    }


}

