//*********************//
// MD. MOSHIUR RAHMAN  //
// CSE'15, RUET        //
// ROLL: 1503066       //
//*********************//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fibonacci[93+1];

ll FFibonacci(int i)
{
	if(fibonacci[i]!=-1)
		return fibonacci[i];
	if(i==1)
		return 0;
	if(i==2)
		return 1;
	fibonacci[i]=FFibonacci(i-1)+FFibonacci(i-2);
	return fibonacci[i];
}

int main()
{
	memset(fibonacci,-1,sizeof fibonacci);
	int n;
	cin>>n;
    cout<<FFibonacci(n)<<endl;
    return 0;
}
