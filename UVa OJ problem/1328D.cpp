
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
  ll m,n , i, j;
  cin>>n>>m;

  vector<ll>a;

  fr(i, m)cin>>j, a.push_back(j);
  //sort(a, a+m);
  ll ans=0 , an=0;

  fr(i , m-1)
  {
      ans=max(ans, abs(a[i]-a[i+1]) );
  }
  ans=max( ans,  n-a[m-1]+a[0] );

  cout<<n-ans<<endl;
}
