#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pfn printf("\n")
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


#define fr(i,x,n)  for(ll i = x ; i <= (n) ; i++)

#define pb(x) push_back(x)

#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)
#define lint long long

typedef unsigned long long ulint;
#define maxn 5000005

int phi[maxn];
lint f[maxn], ans[maxn];
int t;
int n;

void phi_generate_cal()
{
    memset(phi, 0, sizeof(phi));
    phi[1] = 1;
    for(int i = 2; i < maxn; i++)
    {
        if(!phi[i])
        {
            for(int j = i; j < maxn; j += i)
            {
                if(!phi[j])
                {
                    phi [j] = j;
                }
                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }
    memset(f, 0, sizeof(f));

    for(int i = 2; i < maxn; i++)
    {
        for(int j=i;j<maxn;j+=i)
        {
            f[j]+=((ulint)phi[i])*i/2*j;
        }
        ans[i]=ans[i-1]+f[i];
    }
    return ;
}

int main()
{
    long long  i,j,m=1,n,t;
    phi_generate_cal();

    scl(t);
    while(t--)
    {
        scl(n);
        pfc(m); m++;
        printf("%llu\n",ans[n]);
    }
        return 0;
    }
