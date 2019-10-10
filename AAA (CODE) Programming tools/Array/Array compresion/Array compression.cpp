///http://codeforces.com/blog/entry/60288

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



int main()
{

    int n;
    sci(n);

    vector< pair<LL,LL> >arr(n);

    vector<LL>cal;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;

        cal.pb(arr[i].first);
        cal.pb(arr[i].second+1);
    }

    sort(cal.begin(),cal.end());
    cal.resize(unique(cal.begin(),cal.end())-cal.begin());

    vector<int>cnt(2*n);



    for(int i=0;i<n;i++)
    {
        int l=lower_bound(cal.begin(),cal.end(),arr[i].first)-cal.begin();
        int r=lower_bound(cal.begin(),cal.end(),arr[i].second+1)-cal.begin();

        cnt[l]++;
        cnt[r]--;

    }

    for(int i=1;i<2*n;i++)
        cnt[i]+=cnt[i-1];

    vector<LL>ans(n+1);


    for(int i=1;i<=2*n;i++)
    {
        ans[ cnt[i-1] ]+= cal[i]-cal[i-1];
      //  cout<<"ans  "<<cnt[i-1]<< " "<<ans[cnt[i-1]]<<endl;
    }


    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }




}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
