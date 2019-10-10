

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
#define INF                 1e18
#define EPS                 1e-8
#define Pi                  acos(-1.0)
LL bigmod(LL b, LL p, LL md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {LL y=bigmod(b,p/2,md);return (y*y)%md;}}
#define N 100005

int cnt[10];
int main()
{
    int n;
    sci(n);

    string str;
    cin>>str;

    for(int i=1;i<=9;i++)
    {
        int tem;
        sci(tem);
        cnt[i]=tem;
    }


    int id=0;
    for(int i=0;i<n;i++)
    {
        int val=str[i]-'0';
        if(cnt[val]>val)
        {
            id=i;
            break;
        }
    }

    for(int i=id;i<n;i++)
    {
        int val=str[i]-'0';
        if(cnt[val]>=val)
        {
            str[i]=cnt[val]+'0';
        }
        else
            break;
    }
    cout<<str<<endl;


    return 0;
}
