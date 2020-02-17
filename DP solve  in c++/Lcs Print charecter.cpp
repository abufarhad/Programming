#include <bits/stdc++.h>
using namespace std;

int lcs(char x[], char y[], int m, int n)
{
    int dp[m+1][n+1], i,j;
    for( i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {

            if(i==0||j==0)
                dp[i][j]=0;

            else if( x[i-1]==y[j-1])
                dp[i][j]=dp[i-1][j-1]+1;

            else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }

    //  return dp[m][n];

    int index= dp[m][n];
    char Lcs[index+1];
    Lcs[index]='\0';
    i=m,j=n;


    while(i>0&&j>0)
    {
//        cout<<"i =" <<i<<" "<< "j = "<<j<<endl;
//        cout<<"Before 1 = dp[i-1][j] = "<<dp[i-1][j]<<" dp[i][j-1] = "<<dp[i][j-1]<<endl;
//        cout<<"x[i-1] = "<<x[i-1]<<" "<<"y[j-1]  = "<<y[j-1] <<" "<<endl<<endl;

        if(x[i-1]==y[j-1])
        {
            Lcs[index-1]=x[i-1];
            //cout<<"Index = "<<Lcs[index-1]<<" "<<endl<<endl;
            index--, i--, j--;
        }
//        cout<<"i = "<<i<<" j = "<<j<<endl;
//        cout<<"Before 2 = dp[i-1][j] = "<<dp[i-1][j]<<" dp[i][j-1] = "<<dp[i][j-1]<<endl;

        if( dp[i-1][j]>dp[i][j-1])
        {
            i--;
        }
        else j--;
//        cout<< "i= "<<i<<"  j= "<<j<<endl;
//        cout<<"After = dp[i-1][j] = "<<dp[i-1][j]<<" dp[i][j-1] = "<<dp[i][j-1]<<endl;

    }

    cout<<endl<<"Lcs of "<<x<<"and "<<y<<" is  = "<<Lcs<<endl;

}

int main()
{
    int m,n, i,j;
    char a[100], b[100];
    cin>>j;
    while(j--)
    {
        cin>>m>>n;
        cin>>a>>b;
        int ans=lcs(a,b,m,n);
        //cout<<ans<<endl;
    }
}

