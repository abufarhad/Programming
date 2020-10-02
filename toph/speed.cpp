//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
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

#define N 30

ll dp[N][N][N];


ll solve( )
{
    ll i , k , j , l;
    dp[25][25][25]=1;

    for(i=25 ; i>=0 ; i--)
    {
        for(j=25; j>=0 ; j--)
        {
            for(k=25 ; k>=0 ; k--)
            {
                  bool yes=false;
                  for(l=1; l<=3; l++) if( dp[i+l ][j][k]==1  or dp[i][j+l][k]==1  or dp[i ][j][k+l]==1  )yes=true;

                  if(yes)dp[i][j][k]=-1;
                  else dp[i][j][k]=1;
            }
        }
    }
}

int main()
{
    solve( );
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>s;

        ans= dp[ s[0]-'A' ][  s[1]-'A' ][  s[2]-'A'  ];

        if(ans==-1)cout<<"Jan"<<endl;
        else cout<<"Jami"<<endl;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

