///incomplete

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
    for(i=1; i<=y; i++)
    {
        cin>>s>>a[i];
        if(a[i-1]<=a[i] )
        {
            mp[i]=s;
            s1=mp[i];
        }
        else mp[i ]=s1;

        cout<<m[i]<<endl;
        cout<<"Day "<<i<<": "<<m[i]<<endl;
    }


}

