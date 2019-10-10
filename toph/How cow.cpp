#include<bits/stdc++.h>
using namespace std;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define ll long long
int main(){ ll m,n,i,j,k;  cin>>n>>k;  ll a[n+1];  fr(i,n)  cin>>a[i];  ll cnt=0; fr(i,n) for(j=i+1; j<n; j++)if( a[i]+a[j]==k ) cnt++;  cout<<cnt<<endl; }
