//*********************//
// MD. MOSHIUR RAHMAN  //
// CSE'15, RUET        //
// ROLL: 1503066       //
//*********************//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

unsigned ll factorial[21];

void preCalculate(int n)
{
	factorial[0]=1;
	unsigned ll fact=1;

	for(int i=1;i<=20;i++)
	{
		fact*=i;
		factorial[i]=fact;
	}
}

unsigned ll countCombination(int n,int r)
{
	if(n<1)
		return 0;
	return (factorial[n+r-1]/(factorial[r]*factorial[n-1]));
}

ll power(int n,int r)
{
	if(r==0)
		return 1;
	if(r%2)
		return power(n,r-1)*n;
	ll x=power(n,r/2);
	return x*x;
}

int main()
{
    preCalculate(20);
    int n,r;
    scanf("%d %d",&n,&r);
    cout<<"Number of Permutation with allowed repetation: "<<n<<"^"<<r<<" = "<<power(n,r)<<endl;
    cout<<"Number of Combination with allowed repetation: "<<countCombination(n,r);
    return 0;
}
