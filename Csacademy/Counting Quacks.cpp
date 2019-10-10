#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define N 1000006

ll a[N], cal[N], cnt[N];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll ans=0;
      scl(n); scl(t);

      fr(i,n)cin>>x, a[x]++;

      fr1(i,t)
      {
          if(a[i]==0)continue;
          for(j=i;j<=t;j+=i)cal[j]+=a[i];
      }

      x=y=0;
      fr1(i,t)
      {
          if(cal[i]==x)y++;
          else if(cal[i]>x)x=cal[i], y=1;
      }
      cout<<x<<" "<<y<<endl;
return 0;
}


