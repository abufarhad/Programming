#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a,ll n)
{
	if(n==0)
		return 1;
	if(n%2)
       return a*power(a,n-1);
	ll x=power(a,n/2);
	  return x*x;
}

int main(){
ll m,n,a,b,i,modulus=(pow(10,9) + 7);
double k,l;
cin>>m>>n;
for (i=1;i<=n;i++){
    i = power(m,i)% modulus;
 //b=a%(1000);
 cout<<i<<endl;}

}
