#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")

#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})
#define sv(a) sort(a.begin(),a.end())

int data[10];

void printPermutation(bool taken[],int c,deque<int>q,int n,int r)
{
	if(c==r)
	{
		for(auto x:q)
		{
			cout<<x<<' ';
		}
		cout<<endl;
	}

	for(int i=0;i<n;i++)
	{
		if(!taken[i])
		{
			taken[i]=true;
			q.push_back(data[i]);
			printPermutation(taken,c+1,q,n,r);
			q.pop_back();
			taken[i]=false;
		}
	}
}

int main()
{
    int n,r;
    sci(n),sci(r);
    bool taken[n];
    for(int i=0;i<n;i++)
    {
    	data[i]=i+1;
    	taken[i]=false;
    }

    sort(data,data+n);
    deque<int>q;

    printPermutation(taken,0,q,n,r);

    return 0;
}
