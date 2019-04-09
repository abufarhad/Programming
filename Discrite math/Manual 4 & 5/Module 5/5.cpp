#include<bits/stdc++.h>
using namespace std;
#define ll long long

int data[10];

void printPermutation(bool taken[],int c,deque<int>q,int n)
{
	if(c==n)
	{
		for(auto x:q)
			cout<<x<<' ';
		cout<<endl;
		return;
	}
	if(c!=0)
	{
		for(auto x:q)
			cout<<x<<' ';
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		if(!taken[i])
		{
			taken[i]=true;
			q.push_back(data[i]);
			printPermutation(taken,c+1,q,n);
			q.pop_back();
			taken[i]=false;
		}
	}
}

int main()
{
    int n;
    scanf("%d",&n);
    bool taken[n];
    for(int i=0;i<n;i++)
    {
    	data[i]=i+1;
    	taken[i]=false;
    }
    sort(data,data+n);
    deque<int>q;
    printPermutation(taken,0,q,n);
    return 0;
}
