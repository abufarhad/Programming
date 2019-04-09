#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)


int main()
{

    ll m,n,t,a,b,c,d,i,j,k,x,y,z,ans;
    scl(t);

    for(x=1; x<=t; x++)
    {
        ll cnt=0,ans=0;
        scl(n);
        for(i=0; i<n; i++)
        {
            cin>>b>>y>>z;
            ans+=b*z;
        }
        pfl(ans);
    }

    return 0;
}





