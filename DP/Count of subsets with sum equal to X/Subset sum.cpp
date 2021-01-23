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
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 1005
string s, s1;
ll n ,  b, cnt, cn, sum, res;
ll a[N]  , dp[N][N];

//all possible combination Complexity 2^n
ll solve(ll i ,ll j , ll cnt)
{
    if(i>j)
    {
        if(sum== cnt)return 1;
        else return 0;
    }

    return solve(i+1 , j , a[i]+cnt ) + solve(i+1 , j , cnt );
}

//all possible combination Complexity 2^n
ll iteratively_solve( )
{
    ll i , j , cnt=0;

    fr(i , (1<<n) )
    {
        cnt=0;
        fr(j , n) if( i & (1<< j ) )  cnt+=a[j];

        //cout<<cnt<<" ";
        if(cnt==sum)res++;
    }

    return res;
}

ll dynamically(ll i , ll j , ll cnt)
{
    if(i>j)
    {
        if(cnt==sum)return 1;
        else return 0;
    }

    if(dp[i][cnt] !=-1 )return dp[i][cnt];

    return dynamically(i+1 , j , cnt+a[i]) + dynamically(i+1 , j , cnt) ;
}

int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll ans=0;
        scll(n , sum);
        fr(i , n)scl(a[i]);

        ans=solve( 0, n-1 , 0);
        pfl(ans);

        ans=iteratively_solve( );
        pfl(ans);

        mem(dp , -1);
        ans=dynamically(0 , n-1 , 0);
        pfl(ans);
    }

return 0;
}
/*
 ll st[n+1][tot+1];

       mem(st, 0);
       fr(i , n+1)st[i][0]=1;


       fr1(i , n)
       {
           for(j=a[i-1] ; j<=tot; j++)
           {
               st[i][j]=max(st[i-1][j] ,  st[i-1][j- a[i-1] ] );
           }
       }

       cnt=st[n][tot];

*/

