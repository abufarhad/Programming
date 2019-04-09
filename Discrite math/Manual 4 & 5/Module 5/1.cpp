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

unsigned ll countPermutration(int n,int r)
{
	if(r>n)
		return 0;
	return (factorial[n]/factorial[n-r]);
}

unsigned ll countCombination(int n,int r)
{
	if(r>n)
		return 0;
	return (factorial[n]/(factorial[r]*factorial[n-r]));
}


int main()
{
    preCalculate(20);
    int n,r;
    scanf("%d %d",&n,&r);
    cout<<"Number of Permutation: "<<n<<"P"<<r<<" = "<<countPermutration(n,r)<<"\n";
    cout<<"Number of Combination: "<<n<<"C"<<r<<" = "<<countCombination(n,r);
    return 0;
}
