

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


int main()
{
    LL n;
    cin>>n;


    LL arr[n];
    LL brr[n];

    set<LL>st;
    map<LL,LL>Map;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
        st.insert(brr[i]);
        Map[ brr[i] ]++;
    }


    for(int i=0;i<n;i++)
    {

        LL now=arr[i];
        LL best=n-now;


        auto val1=st.lower_bound(best);
        LL val2=(*st.begin());

        LL tem=n+n;
        LL val;

        LL t=n+n+n;


        LL vv=-1;
        if(val1!=st.end())
        {
            val=(*val1);
            tem=(val+now)%n;

            if(st.size()>1 && val!=(*st.begin()))
            {
                auto v=val1;
                v--;
                vv=(*v);
            }

        }
        else
        {
            val=(*st.rbegin());
        }
        LL tem2=((val2)+now)%n;

        if(vv!=-1)
        {
            t=(vv+now)%n;
        }

        if(t<min(tem,tem2))
        {
            arr[i]=t;
            Map[ vv ]--;
            if(Map[vv]==0)
                st.erase(vv);
            continue;
        }


        if(tem<=tem2)
        {
            arr[i]=tem;
            Map[val]--;
            if(Map[val]==0)
                st.erase(val);
        }
        else
        {
            arr[i]=tem2;
            Map[ val2 ]--;
            if(Map[val2]==0)
                st.erase(val2);
        }



      // cout<<*val1<<endl;


    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";









    return 0;
}
