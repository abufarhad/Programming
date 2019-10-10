
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)
#define LL long long
#define ull unsigned long long int
#define scl(n) scanf("%lld", &n)
#define scf(n) scanf("%lf", &n)
#define sci(n) scanf("%d", &n)
#define scii(n,m) scanf("%d %d",&n,&m)
#define sciii(n,m,p) scanf("%d %d %d",&n,&m,&p)
#define scs(n) scanf("%s", n)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e31
#define EPS 1e-8
#define Pi acos(-1.0)
#define N 100005

int dp[N];
int arr[N];
bool vis[N];

int main()
{
    int n;
    sci(n);


    for(int i=0;i<n;i++)
        sci(arr[i]);



    dp[0]=0;
    dp[1]=arr[0];
    dp[2]=arr[0]+arr[1];

    for(int i=2;i<n;i++)
    {
        dp[i+1]=max(arr[i]+dp[i-1],arr[i]+arr[i-1]+dp[i-2]);
        dp[i+1]=max(dp[i],dp[i+1]);

    }


    cout<<"inclusion array is :\n";
    for(int i=1;i<=n;i++)
    {

        cout<<dp[i] <<" ";
    }
    cout<<endl;



    return 0;
}
