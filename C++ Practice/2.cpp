#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>vec;

 #define N 2010
using namespace std;

int n,k,cnt[N],num[N],a[N],ans;

int main()
{
	int i,j,p;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		a[i]=num[i];
	}
	sort(num+1,num+n+1);

	for(i=1;i<=n;i++)
	{
		cout<<num[i]<< " ";
	}
	cout<<endl;
	for(i=n;i>=n-k+1;i--)
	{
		cout<<cnt[num[i]]++<<" ";

		ans+=num[i];
	}
	cout<<ans<<endl;
	for(i=1,j=0;i<=n;i++)
	{
		j++;
		if(cnt[a[i]])
		{
		    cout<<cnt[a[i]]<<" ";
			k--;
			if(!k) j+=n-i;
			printf("%d ",j);
			j=0;
			cnt[a[i]]--;
		}
	}
}
