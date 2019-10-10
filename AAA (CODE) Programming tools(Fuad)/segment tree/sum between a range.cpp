#include<bits/stdc++.h>
using namespace std;
#define inf 100000000
int arr[1000];
int tree[10000];

void make_tree(int node,int b,int e)
{
    if(b==e){
        tree[node]=arr[b];
        return ;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    make_tree(left,b,mid);
    make_tree(right,mid+1,e);
    if(tree[left]<tree[right])
        tree[node]=tree[left];
    else
        tree[node]=tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return inf;
    if(b>=i && e<=j)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);

    return min(p1,p2);
}
int main()
{
     int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>arr[i];
    make_tree(1,1,n);
    int a,b;
    while(1)
    {
        cout<<"enter the range :"<<endl;
        cin>>a>>b;
        cout<<"****** minimum in the range is : "<<query(1,1,n,a,b)<<"\n\n\n"<<endl;
    }

    return 0;
}
