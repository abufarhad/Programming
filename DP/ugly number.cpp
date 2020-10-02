#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

unsigned getnthugly(unsigned n)
{
    unsigned ugly[n];
    unsigned i2=0,i3=0,i5=0;
    unsigned next_multiple_2=2;
    unsigned next_multiple_3=3;
    unsigned next_multiple_5=5;
    unsigned   next_ugly_no=1;

    ugly[0]=1;
    for(int i=1;i<n;i++)
    {
        next_ugly_no=min(next_multiple_2,min(next_multiple_3,next_multiple_5));
        cout<<next_ugly_no<<endl;

        ugly[i]=next_ugly_no;
        if(next_ugly_no==next_multiple_2)
        {
            i2=i2+1;
            next_multiple_2=ugly[i2]*2;
          //   cout<<next_ugly_no<<endl;

        }
         if(next_ugly_no==next_multiple_3)
        {
            i3=i3+1;
            next_multiple_3=ugly[i3]*3;
        }
         if(next_ugly_no==next_multiple_5)
        {
            i5=i5+1;
            next_multiple_5=ugly[i5]*5;
        }
    }
    return next_ugly_no;
}

int main()
{
  unsigned  x,n;
  cin>>n;
  x=getnthugly(n);
  pfi(x);
  pn;
  //cout<<getnthugly(n)<<endl;
  return 0;
}
