//*********************//
// MD. MOSHIUR RAHMAN  //
// CSE'15, RUET        //
// ROLL: 1503066       //
//*********************//
#include<bits/stdc++.h>
using namespace std;
#define ll long long

set<deque<int>>ans;
int data[10];

void makePermutation(bool taken[],int c,deque<int>q,int n,int r)
{
	if(c==r)
	{
		ans.insert(q);
		return;
	}

	for(int i=0;i<n;i++)
	{
		if(!taken[i])
		{
			q.push_back(data[i]);
			makePermutation(taken,c+1,q,n,r);
			q.pop_back();
			taken[i]=true;
			q.push_back(data[i]);
			makePermutation(taken,c+1,q,n,r);
			q.pop_back();
			taken[i]=false;
		}
	}
}

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    bool taken[n];
    for(int i=0;i<n;i++)
    {
    	data[i]=i+1;
    	taken[i]=false;
    }

    sort(data,data+n);
    deque<int>q;
    
    makePermutation(taken,0,q,n,r);

    for(set<deque<int>>::iterator i=ans.begin();i!=ans.end();i++)
    {
    	for(auto j:*i)
    	{
    		cout<<j<<' ';
    	}
    	cout<<endl;
    }

    return 0;
}
