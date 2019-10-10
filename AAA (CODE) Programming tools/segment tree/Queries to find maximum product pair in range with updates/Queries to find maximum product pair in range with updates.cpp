

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

LL arr[N];
struct NODE
{
    int mx1;
    int mx2;
};

NODE tree[4*N];

void init(int node, int b, int e)
{
    if(b==e)
    {
        tree[node].mx1=arr[b];
        tree[node].mx2=0;
        return ;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);

    int tem[4];
    tem[0]=tree[left].mx1;
    tem[1]=tree[left].mx2;
    tem[2]=tree[right].mx1;
    tem[3]=tree[right].mx2;

    sort(tem,tem+4);

    tree[node].mx1=tem[3];
    tree[node].mx2=tem[2];

}

NODE query(int node, int b, int e, int i, int j)
{
    NODE dummy;


    if(b==e)
    {
        dummy=tree[node];
        return dummy;
    }

    if(b>j || e<i)
    {
        dummy.mx1=0;
        dummy.mx2=0;
        return dummy;
    }

    if(b>=i && e<=j)
    {
        return tree[node];
    }



    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    NODE p1=query(left,b,mid,i,j);
    NODE p2=query(right,mid+1,e,i,j);




    int tem[4];
    tem[0]=p1.mx1;
    tem[1]=p1.mx2;
    tem[2]=p2.mx1;
    tem[3]=p1.mx2;

    sort(tem,tem+4);

    NODE ret;
    ret.mx1=tem[3];
    ret.mx2=tem[2];

    return ret;


}


int main()
{
    cout<<"ASDadA"<<endl;
    int n;
    cin>>n;

    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];

    init(1,1,n);
    int q;
    cin>>q;


    while(q--)
    {
        int l,r;
        cin>>l>>r;

        NODE res=query(1,1,n,l,r);


        cout<<res.mx1<<" - "<<res.mx2<<endl;

    }




    return 0;
}



/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
