
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
#define MODP                99999999999973LL
#define pb                  push_back
#define ff                  first
#define ss                  second
#define mp                  make_pair
#define pp                  pair<int,int>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)

#define N 1005
LL a,b;
vector<int>num;

int dp[20][180][2];


LL call(int pos,int sum,int f )
{

    if(pos==num.size())
        return sum;
    if(dp[pos][sum][f]!=-1)
        return dp[pos][sum][f];

    LL res=0;

    int lmt;

    if(f==0)
    {
        lmt=num[pos];
    }
    else
    {
        lmt=9;
    }

    for(int i=0;i<=lmt;i++)
    {
        int nf=f;

        if(i<lmt) nf=1;


        res+=call(pos+1,sum+i,nf);

    }

    dp[pos][sum][f]=res;

    return res;

}


LL solve(LL n )
{
    num.clear();
    while(n)
    {
        num.pb(n%10);
        n=n/10;
    }

    reverse(num.begin(),num.end());

    memo(dp,-1);

    LL res=call(0,0,0);

    return res;


}


int main()
{


    cin>>a>>b;



    cout<<solve(b)-solve(a-1)<<endl;



    return 0;

}


/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
