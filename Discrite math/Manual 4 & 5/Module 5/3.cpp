#include<bits/stdc++.h>
using namespace std;
#define ll long long

int data[1000];
int dp[1001];

int getLIS(int pre,int i,int n)
{
	if(dp[i]!=-1)
		return dp[i];

	int p=0;
	for(int j=i+1;j<n;j++)
	{
		if(data[j]>pre)
			p=max(p,getLIS(data[j],i+1,n));
	}

	dp[i]=p+1;
	return dp[i];
}

int getLDS(int pre,int i,int n)
{
	if(dp[i]!=-1)
		return dp[i];

	int p=0;
	for(int j=i+1;j<n;j++)
	{
		if(data[j]<pre)
			p=max(p,getLDS(data[j],i+1,n));
	}

	dp[i]=p+1;
	return dp[i];
}

int main()
{
    int n;
   	scanf("%d",&n);

    for(int i=0;i<n;i++)
    	scanf("%d",&data[i]);

  	memset(dp,-1,sizeof dp);
    cout<<"LIS: "<<getLIS(-INT_MAX,0,n)<<endl;

    memset(dp,-1,sizeof dp);
    cout<<"LDS: "<<getLDS(INT_MAX,0,n)<<endl;

    return 0;
}
