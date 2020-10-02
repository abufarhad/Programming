// BISMILLAHIR RAHMANIR RAHIM

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define inf 0x3f3f3f3f

#define PI acos(-1)
#define eps 1e-9
//#define inf 100000000
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
//int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
//int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

int biton(int N, int pos)
{
    return N = N | (1 << pos);
}
int bitoff(int N, int pos)
{
    return N = N & ~(1 << pos);
}
bool check(int N, int pos)
{
    return (bool)(N & (1 << pos));
}

#define ll long long int
#define ff first
#define ss second
#define sc(a)           scanf("%d", &a)
#define sc2(a, b)       scanf("%d%d", &a, &b)
#define sc3(a, b, c)    scanf("%d%d%d", &a, &b, &c)
#define SS(a) scanf("%lli", &a)
#define P(a) printf("%i", a)
#define PP(a) printf("%lli", a)

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define REP(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

int n, m, ar[12];
ll dp[12][12];

ll call(int pos, int prv)
{
    cout<<"pos "<<pos<<" prev "<<prv<<endl;

    if(pos == n)  return 1;

    ll &ret = dp[pos][prv];
    if(ret != -1)   return ret;

    ll ans = 0;
    if(pos == 0)
    {
        cout<<"If dhukse ->"<<endl;
        REP(i, m) ans += call(pos + 1, ar[i]) , cout<<"ans  frist "<<ans<<endl;
    }
    else
    {
        cout<<"Else dhukse ->"<<endl;
        REP(i, m)
        {
            cout<<"pos -> "<<pos<<" prev ->"<<prv<<endl;
            cout<<i<<" "<<ar[i]<<" "<<prv<<endl;
            if(abs(ar[i] - prv) <= 2)  ans += call(pos + 1, ar[i])  , cout<<"ans second "<<ans<<endl;
        }
    }
    return ret = ans;
}

int main()
{

    int t, cs = 0;
    sc(t);
    while(t--)
    {

        sc2(m, n);
        REP(i, m) sc(ar[i]);
        mem(dp, -1);
        ll ans = call(0, 0);
        printf("Case %i: %lli\n", ++cs, ans);
    }

    //fprintf(stderr, "Time: %d ms\n", (int)(clock()*1000.0/CLOCKS_PER_SEC));
    return 0;
}
