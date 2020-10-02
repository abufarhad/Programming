
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
#define seg_tree(n) 	ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll ar[100] , dp[11][100][2];

ll digit_sum(ll pos , ll n , ll sum , bool flag )
{
    if(pos>n)return sum;
    if(dp[pos][sum][flag]  !=-1 )return dp[pos][sum][flag] ;

    ll limit=9;
    if(!flag)limit=ar[pos];
    ll ans=0;

    fr(i , limit+1)
    {
        if(flag  or i<limit) ans+=digit_sum(pos+1 , n , sum+i  , true);
        else ans+=digit_sum(pos+1 , n , sum+i , false);
    }

    return dp[pos][sum][flag] =ans;
}

int main()
{
    ll t;
    t=1;
    while(1)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string a, b, s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>a>>b;

        if(a[0]=='-'  and b[0]=='-')break;

        istringstream(a)>>n;
        a=to_string(n-1 );

        fr1(i , a.size())ar[i]=a[i-1]-'0';

        //cout<<a<<" "<<b<<endl;

        mem(dp , -1);
        ll L=digit_sum( 1, a.size()  , 0 , 0 );

        fr1(i , b.size())ar[i]=b[i-1]-'0';

        mem(dp , -1);
        ll R=digit_sum(1, b.size()  , 0 , 0 );


        //cout<<L<<" "<<R<<endl;
        ans= R-L ;

        pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

