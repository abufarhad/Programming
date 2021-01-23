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
ll mx_st, mx_en;

ll kadane(ll a[] , ll n)
{
    ll cur_sm=0, cur_start=0 , mx_sum=0;
    mx_st= mx_en=0;

    fr(i , n)
    {
        cur_sm+=a[i];
        if(cur_sm<0 )
        {
            cur_sm=0;
            cur_start=i+1;
        }
        if(cur_sm>mx_sum)
        {
            mx_sum=cur_sm;
            mx_st=cur_start;
            mx_en=i;
        }
    }
    if(mx_st==n)mx_st=mx_en=0;

    return mx_sum;
}

int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        scll(r, c);

        ll a[r][c];

        fr(i,r)fr(j, c)cin>>a[i][j];

        ll L=0, R=0, cur_sum=0, mx_sum=-inf,  mx_left, mx_right, mx_up , mx_dwn;

        ll tmp[r];

        for(ll left=0; left<c; left++)
        {
            mem(tmp , 0);

            for(ll right=left; right<c;  right++)
            {
                fr(i , r) tmp[i]+=a[i][right];

                sum= kadane(tmp , r);
                if(sum>mx_sum)
                {
                    mx_sum=sum;
                    mx_left=left;
                    mx_right=right;
                    mx_up = mx_st;
                    mx_dwn=mx_en;
                }
            }
        }


        cout<<mx_left<<" "<< mx_right<<" "<< mx_up <<" "<< mx_dwn<<endl;

        ans=mx_sum;

        cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    **** Check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1

/*
4 5
1 2 -1 -4 -20
-8 -3 4 2 1
3 8 -10 1 3
-4 -1 1 7 -6


output: 29
*/
