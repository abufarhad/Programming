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
#define ps printf(" ")
#define pn printf("\n")

#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

int main()
{

    ll m,n,t,b,c,d,i,j,k,l,x,r,zz,ans=0;
    scl(n),scl(m);
    ll a[n];
    map<ll,ll>mp;
    vector<ll>v;
    for(i=0;i<m;i++)
    {
         cin>>l>>r;
    }

    for(i=1;i<=n;i++)
    {

        if(i%2==1)
       v.push_back(0);
        else
        v.push_back(1);
    }



for(i=0;i<v.size();i++)
{
    cout<<v[i];
}

return 0;
}







