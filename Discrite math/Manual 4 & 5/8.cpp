#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd(a,b);
    return 0;
}
