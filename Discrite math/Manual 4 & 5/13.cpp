//*********************//
// MD. MOSHIUR RAHMAN  //
// CSE'15, RUET        //
// ROLL: 1503066       //
//*********************//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countPartition(int m,int n)
{
	if(m==1 || n==1)
		return 1;
	if(m<n)
		return countPartition(m,m);
	if(m==n)
		return 1+countPartition(m,m-1);
	if(m>n)
		return countPartition(m,n-1)+countPartition(m-n,n);
}

int main()
{
    int m;
    cin>>m;
    cout<<countPartition(m,m);
    return 0;
}
