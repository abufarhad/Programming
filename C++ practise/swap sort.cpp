//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

struct value
{
    ll to, from;
};

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    vector<value> v;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      for(i=0;i<n;i++) cin>>a[i];

      fr(i,n)
      {
          ll indx=i;
          for(j=i+1; j<n;j++)
          {
              if(a[indx] > a[j]) indx=j;
          }
          if(indx !=i)
          {
              value tmp;
              tmp.from=i;
              tmp.to=indx;
              v.pb(tmp);

              swap(a[i], a[indx]);
          }
      }
      cout<<v.size()<<endl;
      fr(i,v.size())
      {
          cout<< v[i].from <<" "<<v[i].to<<endl;
      }

return 0;
}




