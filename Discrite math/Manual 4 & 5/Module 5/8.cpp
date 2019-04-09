#include<bits/stdc++.h>
using namespace std;
#define ll long long

int data[10];

set<deque<int>>ans;

void makeCombination(bool taken[],int c,deque<int>q,int n)
{
	if(c==n)
	{
		sort(q.begin(),q.end());
		ans.insert(q);
        return;
	}
    if(c!=0)
    {
        sort(q.begin(),q.end());
        ans.insert(q);
    }
	for(int i=0;i<n;i++)
	{
		if(!taken[i])
		{
			taken[i]=true;
			q.push_back(data[i]);
			makeCombination(taken,c+1,q,n);
			q.pop_back();
			taken[i]=false;
		}
	}
}

int main()
{
    int n,r;
    scanf("%d",&n);
    bool taken[n];
    for(int i=0;i<n;i++)
    {
    	data[i]=i+1;
    	taken[i]=false;
    }

    sort(data,data+n);
    deque<int>q;

    makeCombination(taken,0,q,n);

    for(set<deque<int>>::iterator i=ans.begin();i!=ans.end();i++)
    {
    	for(auto j:*i)
    		cout<<j<<' ';
    	cout<<endl;
    }

    return 0;
}
