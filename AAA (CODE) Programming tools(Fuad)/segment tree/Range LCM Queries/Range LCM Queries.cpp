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
#define N 1000

int tree[4*N];
int arr[N];

void init(int node, int b ,int e )
{
    if(b==e)
    {
        tree[node]=arr[b];
        return ;
    }

    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=(tree[left]*tree[right])/(__gcd(tree[left],tree[right]));


}


int query(int node, int b, int e, int i ,int j)
{
    if(b>=i && e<=j)
    {
        return tree[node];
    }

    if(b>j || e<i)
    {
        return 1;
    }

    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);

    return (p1*p2)/__gcd(p1,p2);


}


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    init(1,1,n);

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;

        int ans=query(1,1,n,l,r);
        cout<<"ans :"<<ans<<endl;

    }




    return 0;

}

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
