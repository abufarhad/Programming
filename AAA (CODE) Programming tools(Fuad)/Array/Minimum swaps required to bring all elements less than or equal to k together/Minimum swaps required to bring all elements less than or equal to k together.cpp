

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)          for(i=a;i<b;i++)
#define repr(i,a,b)         for(i=a;i>=b;i--)

#define LL                  long long
#define ull                 unsigned long long int
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64d ",n)
#define pfs(s)              printf("%s\n",s)

#define MOD                 1000000007
#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 100005

///https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/

int main()
{

    int n,k;
    scii(n,k);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        sci(arr[i]);
    }

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
            cnt++;
    }

    int bad=0;
    for(int i=0;i<cnt;i++)
    {
        if(arr[i]>k)
            bad++;
    }


    int res=bad;
    for(int i=cnt;i<n;i++)
    {
        if(arr[i-cnt]>k)
            bad--;
        if(arr[i]>k)
            bad++;

        res=min(res,bad);

    }
    cout<<res<<endl;


}
