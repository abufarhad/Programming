#include <bits/stdc++.h>
using namespace std;

int lcs(string x,string y, int m, int n)
{
    int dp[m+1][n+1], i,j;
    for( i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            if(i==0||j==0)  dp[i][j]=0;

            else if( x[i-1]==y[j-1])    dp[i][j]=dp[i-1][j-1]+1;  ///diagonal matched so increased +1 to previous diagonal value

            else     dp[i][j]=max(dp[i-1][j], dp[i][j-1]);      ///diagonal not matched so max( left, upper)
        }
    }
    return dp[m][n];
}


int main()
{
    int m,n, i,j;
    string a,b;
    while(cin>>a>>b)
    {
        int ans=lcs(a,b,a.size(),b.size());
        cout<<ans<<endl;
    }
}
