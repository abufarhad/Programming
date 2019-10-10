#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")

ll calc(string s, string s1, ll m, ll n)
{
    ll dp[m+1][n+1];

    fr(i,m+1)
    {
        fr(j,n+1)
        {
            if(i==0 )dp[i][j]=j;        //if 1st string empty
            else if(j==0)dp[i][j]=i;   //if 2nd string empty
            else if(s[i-1]==s1[j-1]) dp[i][j]=dp[i-1][j-1]; //if last character matched
            else dp[i][j]=1+min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]) ); //if last character not matched
        }
    }
    return dp[m][n];
}
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      string s,s1,big, sml;
      cin>>s>>s1;
      ans=calc(s,s1, l(s), l(s1));
      pfl(ans);

return 0;
}
