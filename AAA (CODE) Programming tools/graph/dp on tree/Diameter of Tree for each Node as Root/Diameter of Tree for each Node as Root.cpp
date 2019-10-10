#include <bits/stdc++.h>
// #include "stdafx.h"
// #pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp);
void ipgraph(int m);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N], in[N], out[N], dp[N];

void dfs1(int u, int par){
	in[u] = 0;
	for(int v:g[u]){
		if (v == par) continue;
		dfs1(v, u);
		in[u] = max(in[u], 1+in[v]);
	}
}

void dfs2(int u, int par){
	int mx1(-1), mx2(-1);

    //find top 2 maximum values of in[v]
    for(int v: g[u]){
            if(v == par) continue;
            if(in[v] >= mx1) mx2 = mx1, mx1 = in[v];
            else if(in[v] > mx2) mx2 = in[v];
    }
	for(int v:g[u]){
		if (v == par) continue;
		int use = mx1;

		if(mx1 == in[v])
			use = mx2;

		out[v] = max(1+out[u], 2+use);

		dfs2(v, u);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i,n,k,j,u,v;

	cin >> n;
	fo(i, n-1){
		cin >> u >> v;
		g[u].pb(v);
		g[v].pb(u);
	}

	dfs1(1, 0);
	dfs2(1, 0);

	Fo(i, 1, n+1){
		dp[i] = max(in[i], out[i]);
		cout << dp[i] << " " ;
	}

	return 0;
}

