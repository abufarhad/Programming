
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int tree[4*100];
int lazy[4*100];

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

void update_range(int node,int b,int e,int i,int j,int val)
{

    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];

        if(b!=e)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }

        lazy[node]=0;
    }



    if(b>=i && e<=j) /// within segment
    {

        tree[node]+=val;

        if(b!=e)
        {
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }

        return ;
    }


    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update_range(left,b,mid,i,j,val);
    update_range(right,mid+1,e,i,j,val);

    tree[node]=min(tree[left],tree[right]);

}




int range_query(int node,int b,int e,int i,int j)
{


    if(b>j || e<i)
        return INT_MAX;

    if(lazy[node]!=0)
    {
        tree[node]+=lazy[node];

        if(b!=e)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }

        lazy[node]=0;
    }



    if(b>=i && e<=j) /// within segment
    {
        return tree[node];
    }


    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int p1=range_query(left,b,mid,i,j);
    int p2=range_query(right,mid+1,e,i,j);

    return min(p1,p2);






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
        else if(ch=='s')
        {
            int id,value;
            cin>>id>>value;
            update(1,1,n,id,value);

        }
        else if(ch == 'r') /// lazy update
        {
            int delta;
            cin>>q1>>q2>>delta;
            update_range(1,1,n,q1,q2,delta);
        }

        else if(ch=='u') ///lazy query
        {
            cin>>q1>>q2;
            int x=range_query(1,1,n,q1,q2);
            cout<<x<<endl;
        }



    }
    return 0;
}
