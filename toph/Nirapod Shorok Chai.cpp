///Incomplete

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j,x;
    cin>>n;
    while(n--)
    {
        ll ans=1;
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>x;
            ans*=x;
        }
        ll l=1,r=1;
        while(r<ans)
        {
            l++;
            r=l*l;
        }
       // cout<<r<<endl;
        if( r==ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
