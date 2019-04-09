#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define maxi 1000000007

int main()
{
  ll n,m,i,j, ans=0;
  cin>>n;
  if(n%2==1)
  {
       ans= (n/3)% maxi;
  }
  else
     ans= (n/2) % maxi;

  printf("%lld\n",ans);
}
