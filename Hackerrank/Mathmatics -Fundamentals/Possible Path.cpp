#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long




//ll  gcd(ll a,ll b){if(!b)return a;return gcd(b,a%b);}

int main()
{

     ll m,n,t,a,b,c,d,i,j,k,x,y,z,ans;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>x>>y;
        if(__gcd(a,b)==__gcd(x,y) ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

return 0;
}





