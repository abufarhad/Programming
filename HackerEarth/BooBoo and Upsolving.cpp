/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1e17
int solve(ll a[],ll n,ll x)
{
	ll  i;
	ll  sf=0,cnt=1;
	for(i=0;i<n;i++)
	{
		if(sf+a[i]>x)
		{
			cnt++;
			sf=a[i];
		}
		else
		{
			sf+=a[i];
		}
	}

	return cnt;
}
int main()
{
	ll i,j,k;
	ll a[100005],n,m,hi=mx,lo=0,mid;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{	cin>>a[i]; lo=max(lo,a[i]);}

	while(lo<hi)
	{
		mid=(hi+lo)/2;

		if(solve(a,n,mid)<=m)
		{
			hi=mid;
		}
		else
			lo=mid+1;

	}
	cout<<lo<<endl;
}


#include <bits/stdc++.h>
using namespace std;

long long n, m, q[100010], L = 0, R = 1e18;

bool check(long long M) {
    long long s = 0, cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(q[i] > M) return true;
        s += q[i];
        if(s > M) s = q[i], cnt++;
    }
    cnt++;
    return (cnt > m);
}

int main() {
    scanf("%lld%lld", &n, &m);
    for(int i = 1; i <= n; i++) scanf("%lld", &q[i]);
    while(L + 1 < R) {
        long long M = (L + R) >> 1;
        if(check(M)) L = M;
        else R = M;
    }
    printf("%lld", R);
}
*/
