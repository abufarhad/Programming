//https://www.geeksforgeeks.org/count-number-of-smallest-elements-in-given-range/



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
#define N 100000



int arr[N];
struct info
{
    int val;
    int cnt;
} tree[4*N];


void init(int node, int b, int e )
{
    if(b==e)
    {
        tree[node].cnt=1;
        tree[node].val=arr[b];
        return ;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);


    if(tree[left].val<tree[right].val)
    {
        tree[node].val=tree[left].val;
        tree[node].cnt=tree[left].cnt;
    }
    else if(tree[left].val>tree[right].val)
    {
        tree[node].val=tree[right].val;
        tree[node].cnt=tree[right].cnt;
    }
    else
    {
        tree[node].val=tree[left].val;
        tree[node].cnt=tree[left].cnt+tree[right].cnt;
    }


}


info query(int node,int b, int e, int i, int j)
{
    if(b>j || e<i)
    {
        info dummy;
        dummy.cnt=dummy.val=INT_MAX;
        return dummy;
    }

    if(b>=i && e<=j)
    {
        return tree[node];
    }

    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;


    info p1=query(left,b,mid,i,j);
    info p2=query(right,mid+1,e,i,j);


    if(p1.val<p2.val)
    {
        return p1;
    }
    else if(p2.val<p1.val)
    {
        return p2;
    }
    else
    {
        info merge_res;
        merge_res.val=p1.val;
        merge_res.cnt=p1.cnt+p2.cnt;
        return merge_res;
    }


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

        info ans=query(1,1,n,l,r);
        cout<<"min value : "<<ans.val<<" ase "<<ans.cnt<<" bar"<<endl;

    }




}



/* LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

