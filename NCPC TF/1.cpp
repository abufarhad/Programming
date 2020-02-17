//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define md 10000005
#define N 100005
//ll a[N];

int main()
{
    fast;
    ll t, i, j, n,l,r,m, ans=1;
    cin>>n>>l>>r;
    ll cnt[5];


    cnt[0]=r/3- (l-1)/ 3 ;
    cnt[1]=(r+1)/3- l/ 3 ;
    cnt[2]=(r+2)/3- (l+1)/ 3 ;

    fr(i, 3)cout<<cnt[i]<<" ";


    ll dp[N][3];

    dp[0][0]=1;

    /*
    fr1(i, n)
    {
        fr(j, 3)
        {
            fr(k, 3)
            {
                dp[i][(k+j)%3]+=dp[i-1][ (k+j)%3 ] *cnt[k];
                dp[i][(k+j)%3]%=md;
            }
        }
    }
*/
    ///or

    fr1(i, n)
    {
        dp[i][0]= (dp[i-1][0]* cnt[0] + dp[i-1][1]* cnt[1] +dp[i-1][2]* cnt[2] )%md;

        dp[i][1]= (dp[i-1][0]* cnt[0] + dp[i-1][1]* cnt[1] +dp[i-1][2]* cnt[2]  )%md;

        dp[i][2]= (dp[i-1][0]* cnt[0] + dp[i-1][1]* cnt[1] +dp[i-1][2]* cnt[2]  )%md;

    }

    ans=dp[n][0];

    cout<<ans<<endl;
    /*
    cin>>n;
    ll a[n];

    fr(i,n)cin>>a[i];
    map<ll, bool>mp;

    for(i=0, j=1;i<n and j<n; i++)
    {
        ll tmp=a[i];

        while(1 )
        {
            if(a[j]<0 ) mp[ abs(a[j]) ]=true;
             if(mp[a[j] ] )break;
            ans++;
        }

    }

    */
    return 0;
}

