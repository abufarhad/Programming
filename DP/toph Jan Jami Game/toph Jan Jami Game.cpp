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
#define pf(x)              printf("%lld ",x)

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

#define N 1000001

ll dp[30][30][30];

void Set( )
{
    ll i, j, k, x;
    mem(dp , 0);
    for(i=25; i>=0; i--)
        {
            for(j=25; j>=0; j--)
            {
                for(k=25; k>=0; k--)
                {
                    if(i==25 and j==25 and k==25 ){ dp[i][j][k]=-1 ; continue;}

                    bool ok=0;

                     fr1(x, 3)
                     {
                         if(dp[i+x][j][k]==-1 or dp[i][j+x][k]==-1 or dp[i][j][k+x]==-1  )ok=1;
                     }

                     if(ok )dp[i][j][k]=1;
                     else dp[i][j][k]=-1;
                }
            }
        }
}

int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0, one=0, zro=0 ;

        cin>>s;
        Set();

        if( dp[s[0]-'A'][s[1]-'A'   ][s[2]-'A'] !=-1 )cout<<"Jan"<<endl;
        else cout<<"Jami"<<endl;
    }
return 0;
}

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

