#include<bits/stdc++.h>
using namespace std;
int arr[100];
int tree[4*100];

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }

    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=min(tree[left],tree[right]);
}

int query(int node,int b,int e,int i,int j)
{
    if(j<b || i>e){
        return INT_MAX;
    }
    if(b>=i && e<=j)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;

    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);

    return min(p1,p2);
}

void update(int node,int b,int e,int i,int new_value)
{
    if(i<b || i>e){
        return ;
    }
    if(b==e){
        tree[node]=new_value;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,new_value);
    update(right,mid+1,e,i,new_value);

     tree[node]=min(tree[left],tree[right]);
}
int main()
{
    int n,q;

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    init(1,1,n);
    int q1,q2;
    cin>>q;
    while(q--){

    char ch;
    cin>>ch;



    if(ch=='q')
    {
        cin>>q1>>q2;
        int x=query(1,1,n,q1,q2);
        cout<<x<<endl;
    }
    else
    {
        int id,value;
        cin>>id>>value;
        update(1,1,n,id,value);

    }



    }
    return 0;
}
