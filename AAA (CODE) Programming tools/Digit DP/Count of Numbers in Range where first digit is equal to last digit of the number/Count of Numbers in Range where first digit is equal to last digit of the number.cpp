
#include<bits/stdc++.h>
using namespace std;

#define LL                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)

#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e9
#define EPS                 1e-8
#define Pi                  acos(-1.0)
LL bigmod(LL b, LL p, LL md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {LL y=bigmod(b,p/2,md);return (y*y)%md;}}
#define N 100005
vector<LL>num;


LL dp[18][10][10][2];

LL call(LL pos, LL first_digit, LL last_digit, LL tight)
{

    if(pos==num.size())
    {

        if(first_digit==last_digit){
            //cout<<first_digit<<" - "<<last_digit<<endl;
            return 1;
        }

        else
            return 0;
    }

    if(dp[pos][first_digit][last_digit][tight]!=-1)
        return dp[pos][first_digit][last_digit][tight];

    LL lmt = tight ? 9:num[pos];

    LL cnt=0;
    for(LL i=0;i<=lmt;i++)
    {
        LL curr_first=first_digit;

        if(pos==0)
            curr_first=i;

        if(curr_first==0 && i)
            curr_first=i;

        LL curr_tight=tight;

        if(i<num[pos])
            curr_tight=1;
        cnt+=call(pos+1,curr_first,i,curr_tight);


    }
    dp[pos][first_digit][last_digit][tight]=cnt;
    return cnt;


}

LL solve(LL n)
{
    num.clear();

    while(n)
    {
        num.pb(n%10);
        n=n/10;

    }

    reverse(num.begin(),num.end());
    memo(dp,-1);

    LL res=call(0,0,0,0);

    return res;

}


int main()
{
    LL a,b;
    cin>>a>>b;

    LL res=solve(b)-solve(a-1);
    cout<<res<<endl;


    return 0;
}



/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
