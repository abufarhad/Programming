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

     ll m,n,t,b,c,d,i,j,k,pp,x,yy,zz,ans=0;
    scl(n),scl(d);
    ll a[n];

    for(x=0; x<n; x++)
    {
      ll cnt=0;
       scl(a[x]);
    }
sortA(a);

    for(i=0; i<n-1; i++)
    {
        yy=a[i]+d;
        zz=a[i+1]-d;
        //cout<<y<<" "<<z<<endl;
        if(yy<zz)
        {
            //cout<<ar[i]<< " "<<ar[i+1]<<endl;
             pp=a[i+1]-a[i];
             if(pp>d) ans=ans+2;
             else ans++;

             pp=yy=zz=0;
        }
        else if(yy==zz) ans++;

        else continue;
    }

        pfl(ans+2);

return 0;
}






