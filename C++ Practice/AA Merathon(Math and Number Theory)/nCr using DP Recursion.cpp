#include <bits/stdc++.h>
using namespace std;
#define ll long long

int nCrModp(int n, int r, int p)
{
    // The array C is going to store last row of
    // pascal triangle at the end. And last entry
    // of last row is nCr
    int C[r+1];
    memset(C, 0, sizeof(C));

    C[0] = 1; // Top row of Pascal Triangle

    // One by constructs remaining rows of Pascal
    // Triangle from top to bottom
    for (int i = 1; i <= n; i++)
    {
        // Fill entries of current row using previous
        // row values
        for (int j = min(i, r); j > 0; j--)

            // nCj = (n-1)Cj + (n-1)C(j-1);
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

int main()
{
    int n = 10, r = 2, p = 13;
    cout << "Value of nCr % p is " << nCrModp(n, r, p);
    return 0;
}

/*
// using DP

ll dp[66][33];

ll nCr(int n, int r)
{
 if(n==r) return dp[n][r] = 1;
 if(r==0) return dp[n][r] = 1;
 if(r==1) return dp[n][r] = (ll)n;
 if(dp[n][r]) return dp[n][r];
 return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}
*/

/*
ll nCr(ll n, ll r, ll MOD)
{
    vector< vector<ll> > C(2,vector<ll> (r+1,0));

    for (ll i=0; i<=n; i++)
    {
        for (int k=0; k<=r && k<=i; k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
    }
    return C[n&1][r];
}
*/
