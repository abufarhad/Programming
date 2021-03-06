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


int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x=0,y,z,l,r, p, q;
        string  s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        getline(cin , s);

        n=s.size();
        ll dp[n][n];
        mem(dp , 0);

        fr(i , n)  dp[i][i]=1;

        ll mx_len=1;

        fr(i , n-1)
        {
            if(s[i]==s[i+1] )
            {
                dp[i][i+1]=1;
                x=i , mx_len=2;
                //break;
            }
        }

        for(l=3; l<=n; l++)
        {
            fr(i , n-l+1 )
            {
                j=l+i-1;
                if(s[i]==s[j] and  dp[i+1][j-1]==1 )
                {
                    dp[i][j]=  1;
                    if(mx_len<l)
                    {
                        mx_len=l;
                        x=i;
                    }
                }
            }
        }

//        fr(i , n)
//        {
//            fr(j , n)pf(dp[i][j] );
//            pn;
//        }

        fr(i , n)fr(j , n)if(dp[i][j])cnt++;

        //pfl(cnt);

        ans=mx_len,  i=x;
        while(mx_len--)s1+=s[i] , i++;

        cout<<s1<<endl;

        //cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1


