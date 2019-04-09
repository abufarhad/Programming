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

int main()
{
    int a,n;
    scanf("%d %d",&a,&n);
    cout<<a<<"^(2^"<<n<<"): "<<power(a,power(2,n));
    return 0;
}
