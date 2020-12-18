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
#define inf                 1e8
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

ll dp[75][75][75][40];  //row, column . mod , taken
ll a[75][75] , k , n, m, mn=-inf;

ll solve(ll r, ll c, ll md , ll cnt)
{
    if( cnt >m/2 )return mn;
    if(c==m) r++   , c=0 , cnt=0;

    if(r==n )
    {
        if(md==0)return 0;
        else return mn;
    }

    ll &ret=dp[r][c][md][cnt] ;
    if(ret!=-1 )return ret;

    ret=solve(r, c+1, md , cnt );   //not taken
    ret=max(ret ,    solve(r, c+1 ,  (md+a[r][c])%k  , cnt+1 )+a[r][c] );  // taken

    return ret;
}

int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll b,c,d,i,j,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>m>>k;

        fr(i , n)fr(j , m)cin>>a[i][j];
        mem(dp , -1);
        ans=solve(0 , 0 , 0 , 0);
        cout<<ans;pn;
    }

return 0;
}
