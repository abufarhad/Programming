#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Max 100001
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


int  query(ll node, ll c, ll n, ll i, ll j )
{
    ///(l..r)....  (x..y)    or  (x..y)...(l..r)
    if(i>n|| j<c)
    {
        return 0;
    }

    ///x....  (l..r)  ...y
    if(c>=i&&n<=j )
    {
        return tree[node];
    }
    ll left=node*2;
    ll right=node*2+1;
    ll mid=(c+n)/2;
    int p=query(left, c, mid, i,j);
    int p1=query(right, mid+1, n, i,j);
    return p+p1;
}


int main()
{
    ll i,m,n,j;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    build_tree(1,1,n);
    update(1,1,n,2,0);
    cout<<query(1,1,n,1,3)<<endl;
    update(1,1,n,2,2);
    cout<<query(1,1,n,2,2)<<endl;

}

