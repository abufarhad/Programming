#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 1000005
ll a[N], b[N], f[N];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll j, k, i, m, n;
        cin>>n;
        for(i=1;i<=n;i++)cin>>a[i];

        ll ans=0;
        for(i=1;i<=n;i++)
        {
            f[i]=lower_bound(b+1, b+ans+1, a[i])-b;

            ans=max(ans, f[i]);

            b[ f[i] ]=a[i];
            //cout<<f[i]<<" "<<b[f[i] ]<<" "<<a[i]<<endl;
        }

        cout<<"Length of LCS "<<ans<<endl;

        //printing LCS

        vector<ll>v;

        for(i=n;i>=1;i--)
        {
            if(f[i]==ans )v.push_back(a[i]), ans--;
            //if(ans<0)break;
        }

        //cout<<v.size()<<endl;
        for(i=v.size()-1; i>=0;i--)cout<<v[i]<<" ";

        cout<<endl;
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        memset(f, 0, sizeof f);

    }
}


/*
Using DP = https://ideone.com/GdIwMH

https://ideone.com/EguJDX
*/
/*
9
1 15 1 10 13 1 1 19 8
5
6 7 1 2 32
8
7 8 9 1 2 3 4 5
7
6 7 9 5 7 20 1
9
1 15 1 10 13 1 1 19 8
16
1 2 3 4 5 3 4 6 7 1 2 3 8 5 6 10
*/

///   Using DP
/*
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
int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;
        ll cnt=0,cn=0,ans=0,sum=0 , mx=-1;
        cin>>n;
        ll a[n+1],  dp[n+5];

        //mem(dp, 1);
        fr(i , n)cin>>a[i],dp[i]=1 ;
        dp[n+1]=1;



        for(i=1; i<n; i++)
        {
            fr(j , i)
            {
                if(a[i]>a[j] )dp[i]=max(dp[i], dp[j]+1);
                ans=max(ans  , dp[i]);
            }
            //fr(i ,n)pf(dp[i]);pn;
        }

        pfl(ans);
        vector<ll>v;
        for(i=n-1;i>=0; i--)if(dp[i]==ans)v.pb(a[i]), ans--;

        reverse(all(v));

        fr(i , v.size())pf(v[i]);pn;

        fr(i, n+5)dp[i]=0;
    }
return 0;
}

*/
