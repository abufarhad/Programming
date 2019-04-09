
///***********incomplete***************

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100005
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
    tree[node]=tree[left]+tree[right];
    //tree[node]=max(tree[left],tree[right]);
}

void   update(ll node, ll c, ll n, ll i, ll newvalue)
{
    if(i>n|| i<c)
    {
        return;
    }
    if(c>=i&&n<=i )
    {
        tree[node]= newvalue;
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
    ll i,m,n,j,x,y;
    cin>>n;
    char c;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    build_tree(1,1,n);
    cin>>c;
    if(c=='U')
    {
        cin>>x>>y;
        update( 1,1,n,x,y);
    }
    else
    {
        cin>>x>>y;
        cout<<quary(1,1,n,x,y)<<endl;
    }
}


