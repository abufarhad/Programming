#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

void lcs(string a, string b)
{
    ll sa=a.size(), sb=b.size();
    ll dp[sa+1][sb+1];

    fr(i, sa+1)
    {
        fr(j, sb+1)
        {
            if(i==0 or j==0)dp[i][j]=0;
            else if(a[i-1]==b[j-1] ) dp[i][j]= dp[i-1][j-1]+1;
            else dp[i][j]= max(dp[i][j-1]  , dp[i-1][j] );
        }
    }

    ///printing

    ll sz=dp[sa][sb];
    ll i=sa, j=sb;
    string s;

    //cout<<sz<<endl;

    while(i>0 and j>0)
    {
        if(a[i-1]==b[j-1])s+=a[i-1] , i--, j--;
        else if(dp[i-1][j] > dp[i][j-1] )i--;
        else j--;
    }

    for(i=s.size()-1 ; i>=0; i--)cout<<s[i];
    cout<<endl;
}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s, s1 ;
        cin>>s>>s1;
        lcs(s, s1);
    }
}
