//*********************//
// MD. MOSHIUR RAHMAN  //
// CSE'15, RUET        //
// ROLL: 1503066       //
//*********************//
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

set<deque<int>>ans;
int data[10];

void makeCombination(bool taken[],int c,deque<int>q,int n,int r)
{
	if(c==r)
	{
		sv(q);
		ans.insert(q);
		return;
	}

	for(int i=0;i<n;i++)
	{
		if(!taken[i])
		{
			q.push_back(data[i]);
			makeCombination(taken,c+1,q,n,r);
			q.pop_back();
			taken[i]=true;
			q.push_back(data[i]);
			makeCombination(taken,c+1,q,n,r);
			q.pop_back();
			taken[i]=false;
		}
	}
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
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
    
    makeCombination(taken,0,q,n,r);

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
