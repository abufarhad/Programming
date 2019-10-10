#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
  ll m,n,i,j,k;
  while(cin>>n)
  {
      ll phi_val=1,div=1;
      ll ans=n;

      for(i=2;i<=n/i ;i++)
      {
          if(n%i==0)
          {
              ll exp=0, phi=1;
              while(n%i==0)
              {
                  n/=i;
                  phi*=i;
                  exp++;
              }
              div*=(exp+1);             ///calculating number of prime factor
              phi_val*=(phi- phi/i ); ///calculating number of phi value
          }
      }
      if(n!=1)
      {
          div*=2;                   ///last number so must be prime so, (1+1=2)
          phi_val*=n-1;          ///lat number so (n-n/n)= n-1
      }
      ll res=ans-phi_val-div+1;
      cout<<res<<endl;
  }
}
