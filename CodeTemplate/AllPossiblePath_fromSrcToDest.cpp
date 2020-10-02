//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category: Graph +DP
 ** @Source :  https://www.hackerrank.com/challenges/kingdom-connectivity/problem
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000000
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

#define N 200006
vector<ll>v[N]  , rev_v[N];
ll vis[N], color[N]  , dp[N];
ll m,n,b,c,d,i,j,k,x,y,z,l,r, p;
ll cnt=0;
bool cycle_found=false;

ll black=0 , gray=1,  white=2 ;

void dfs_rev(ll s)
{
    color[s]=white;
    for(auto now : rev_v[s]) if(color[now]==black)dfs_rev(now);
}

//dfs to solve
ll dfs(ll s)
{
	if(color[s]==gray)
	{
		cycle_found = true;
		return 0;
	}

	if(color[s]==black) return dp[s];

	if(s == n) //destination
	{
		color[s] = black;
		return dp[s] = 1;
	}

	color[s] = gray;

	ll res = 0;
    for(auto now : v[s])
    {
        //cout<<now<<" ";
        res = (res + dfs(now)) % md;
    }

	color[s] = black;

	return dp[s] = res;
}


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll cnt=0,cn=0,ans=0,sum=0 ;
        scll(n, m);

        fr(i, m)
        {
            scll(x, y);
            v[x].pb(y);

            rev_v[y].pb(x);
        }

        dfs_rev(n);

        //fr1(i , n)cout<<i<<" "<<color[i]<<endl;

        ans=dfs(1);

        //pn;
        if(color[n]==white)cout<<0<<endl;
        else if(cycle_found==true)cout<<"INFINITE PATHS"<<endl;
        else pfl(ans);

    }

    return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




