#include<bits/stdc++.h>
using namespace std;
#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfff(n,m,o) scanf("%d%d%d",&n,&m,&o)
#define pf(b)   printf("%d\n",b)
#define test_case(t)  printf("Case %d:\n",t)
#define ll long long
#define Max 100001
int arr[Max], tree[Max*3];

void  build_tree(ll node, ll c, ll n)
{
    if(c==n)
    {
        tree[node]=arr[c];
        return;
    }

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(c+n)/2;
    build_tree(left, c, mid);
    build_tree(right, mid+1, n);
    tree[node]=tree[left]+tree[right];
}

void   update(ll node, ll c, ll n, ll i, ll newvalue)
{
    if(i>n|| i<c)
    {
        return;
    }
    if(c>=i&&n<=i )
    {
        tree[node] = newvalue;
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(c+n)/2;
    update(left, c, mid, i,newvalue);
    update(right, mid+1, n, i,newvalue);
    tree[node]=tree[left]+tree[right];
}


int  quary(ll node, ll c, ll n, ll i, ll j )
{
    if(i>n|| j<c)
    {
        return 0;
    }
    if(c>=i&&n<=j )
    {
        return tree[node];
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(c+n)/2;
    int p=quary(left, c, mid, i,j);
    int p1=quary(right, mid+1, n, i,j);
    return p+p1;
}

int main()
{
    int t,n,m,i,j,e,g,q;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        build_tree(1,0,n-1);
        test_case(j);
        for(int f=0;f<q;f++)
        {
            int num;
            scanf("%d",&num);
            if(num==1)
            {
                scanf("%d",&e);
                printf("%d\n",arr[e]);
                arr[e]=0;
                update(1,0,n-1,e,0);
            }
            if(num==2)
            {
                scanf("%d%d",&e,&g);
                arr[e]+=g;
                update(1,0,n-1,e,arr[e]);
            }
            if(num==3)
            {
                scanf("%d%d",&e,&g);
                printf("%d\n",quary(1,0,n-1,e,g));
            }
        }
    }
}

