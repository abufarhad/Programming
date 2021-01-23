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

#define N 200005


int main()
{
    ll t;
    cin>>t;
    //t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>s>>s1;
        m=l(s) , n=l(s1);



        ll dp[n+1][m+1];
        mem(dp , 0);


        fr(i, n+1)dp[i][0]=cnt , cnt++;
        cnt=0;
        fr(i, m+1)dp[0][i]=cnt , cnt++;
        cnt=0;



        ll mx=-1;

        x=y=-1;

        fr1(i , n)
        {
            fr1(j , m)
            {
                if(s[i-1]==s1[j-1]  )dp[i][j]=dp[i-1][j-1] ;
                else
                {
                    x=min( {dp[i-1][j]  , dp[i-1][j-1]  , dp[i][j-1]}   )+1;
                    dp[i][j]=x;
                }
            }
        }

        ans=dp[n][m];


        i=n , j=m;

        while(1)
        {
            if(i==0 or j==0 )break;
            else if(s[i-1]==s1[j-1] ) i--, j--;
            else if( dp[i][j]== dp[i-1][j-1]+1 )
            {
                i--, j--;
                cout<<"Edit"<<endl;
            }
            else if(dp[i][j]==dp[i-1][j]+1 )
            {
                i--;
                cout<<"Delete in str1"<<endl;
            }
            else if(dp[i][j]==dp[i][j-1]+1 )
            {
                j--;
                cout<<"Delete in str2"<<endl;
            }
        }



        cout<<ans;pn;


    }

return 0;
}

/*
1
abcdef
agced

ans=3
*/

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

