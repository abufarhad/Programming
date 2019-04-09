
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

//int dx[] = {0,1,0,-1,1,1,-1,-1};
//int dy[] = {1,0,-1,0,1,-1,-1,1};

//i64 gcd(i64 a,i64 b){if(!b)return a;return gcd(b,a%b);}


//i64 bigmod(i64 num,i64 n){if(n==0)return 1;i64 x=bigmod(num,n/2);x=x*x%mod;if(n%2==1)x=x*num%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2)%mod;}

//i64 po(i64 a,i64 b){i64 ans=1;while(b--)ans *= a;return ans;}

//i64 ncr(i64 n,i64 r){if(n==r)return 1;if(r==1)return n;if(dp[n][r]!=-1)return dp[n][r];return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);}




#define pb(x) push_back(x)

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)

/*
ll extended_euclid(ll A,ll B,ll *X, ll *Y)
{
    pair<ll,ll>pr;
    ll x,y,u,v,a,b,m,n,p,q,r,r1;
    x=0,y=1;
    u=1,v=0;
    for(a=A,b=B; a!=0 ; b=a,a=r,x=u,y=v,u=m,v=n)
    {
        ///b=aq+r and 0<=r<a
        q=b/a;
        r=b%a;

        ///r=ax+by-aq = ax+by-(au+bv)q= a(x-uq)+b(y-vq)
         m=x-(u*q);
         n=y-(v*q);
    }
    ///ax+by=gcd(a,b)
    *X=x; *Y=y;
    pr= make_pair(x,y);
    return b;
}
*/
ll extended_euclid(ll a, ll b, ll &x, ll &y)
{

    if(b==0)
    {
        x=1;y=0;
        return a;
    }
    ll x1,y1;
    ll temp=extended_euclid(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    cout<<a<<" "<<temp<< " "<<x<<" "<<y<<endl;
    return temp;

}


int main()
{

    ll m,n,t,a,b,i,j,k,x;

    while( (scanf("%lld %lld",&a,&b))==2)
    {
        m=extended_euclid(a,b,i,j);
        printf("%lld %lld %lld\n",i,j,m);
       // printf("Case %lld: ",x);
    }

return 0;
}
