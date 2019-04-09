#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ackerman(int m,int n)
{
	if(m==0)
		return 2*n;
	if(m>=1 && n==0)
    	return 0;
	if(m>=1 && n==1)
		return 2;
	if(m>=1 && n>=2)
		ackerman(m-1,ackerman(m,n-1));
}

int main()
{
    int n,m;
    cin>>m>>n;
    cout<<ackerman(m,n);
    return 0;
}
