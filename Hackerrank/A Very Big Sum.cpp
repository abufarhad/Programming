#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)

int main()
{

    ll  m,n,t,b,c,d,i,j,k,x,y,z,ans=0;
    scl(n);
    ll s1[100], s2,s3,s4,s5,s6;
    queue<ll>q;

    for(i=0;i<n;i++)
    {
        cin>>s1[i];
        ans+=s1[i];
    }
   cout<<ans<<endl;


return 0;
}




