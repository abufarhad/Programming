#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100000
int a[Max], tree[Max*3];


void  build_tree(ll node, ll c, ll n)
{
    if(c==n)
    {
        tree[node]=a[c];
        return;
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(c+n)/2;
    build_tree(left, c, mid);
    build_tree(right, mid+1, n);
    // tree[node]=tree[left]+tree[right];
    tree[node]=min(tree[left],tree[right]);
}


int  quary(ll node, ll c, ll n, ll i, ll j )
{
    if(i>n|| j<c)
    {
        return Max;
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
    return min(p,p1);
}


int main()
{
    ll i,m,n,j,t,u;

    scanf("%d",&t);
    for(u=1; u<=t; u++)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }

        build_tree(1,1,n);

        printf("Case %d:\n",u);
        for(i=0; i<m; i++)
        {
            int one, two;
            scanf("%d%d",&one,&two);
            printf("%d\n",  quary(1,1,n,one, two));
        }
    }
}


