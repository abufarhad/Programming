#include<bits/stdc++.h>

using namespace std;
int arr[1000];
int tree[1000*3];
void make_tree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[e];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    make_tree(left,b,mid);
    make_tree(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(left,mid+1,e,i,j);
    return p1+p2;
}

int main()
{
    int i,n,b,e;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    cin>>b>>e;
    make_tree(1,b,e);
    cout<<query(1,1,n,1,n);
    return 0;
}
