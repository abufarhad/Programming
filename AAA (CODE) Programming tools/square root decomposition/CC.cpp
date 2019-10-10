

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

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(n==1)
    {
        cout<<1<<endl;
        cout<<"L"<<endl;
        return 0;
    }


    int i=0,j=n-1;

    vector<int>v;
    int mx=-1;
    while(i<=j)
    {
        if(arr[i]>mx && arr[j]>mx)
        {

        }
        else if(arr[i]>mx || arr[j]>mx)
        {
            if(arr[i]>mx)
            {

                mx=max(mx,arr[i]);
                v.pb(0);
                i++;
            }
            else if(arr[j]>mx)
            {

                mx=max(mx,arr[j]);
                j--;
                v.pb(1);
            }
            else
                break;
            continue;
        }
        else
            break;

        if(arr[i]<arr[j])
        {
            mx=max(arr[i],mx);
            v.pb(0);
            i++;
        }
        else
        {
            mx=max(arr[j],mx);
            v.pb(1);
            j--;
        }
    }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        if(v[i]==0) cout<<"L";
    else
        cout<<"R";




    return 0;
}
