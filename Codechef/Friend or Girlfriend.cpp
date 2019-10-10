#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, s1;
    char c;
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>c;
        ll ans=0,m=-1;
        for(i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                ans=ans+ (i-m)*(n-i);
                m=i;
            }
        }
        cout<<ans<<endl;
    }
}
