#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct tri
{
    tri *lchild, *rchild;
    ll lcnt, rcnt;

    tri()
    {
        lcnt=rcnt=0;
        lchild=rchild=NULL;
    }
};

void Insert( tri *root, ll n)
{
    for(ll i=20; i>=0; i--)
    {
        ll b=(n>>i)&1;
        if(b)
        {
            root->rcnt++;
            if(root->rchild==NULL)
                root->rchild=new tri();
            root=root->rchild;
        }
        else
        {
            root->lcnt++;
            if( root->lchild==NULL)
                root->lchild=new tri();
            root=root->lchild;
        }
    }
}

ll query( tri *root, ll n, ll k)
{
    if(root==NULL)
        return 0;
    ll res=0;
    for(ll i=20; i>=0; i--)
    {
        bool b1=(k>>i)&1;
        bool b2=(n>>i)&1;

        if(b1)
        {
            if(b2)
            {
                res+=root->rcnt;
                if(root->lchild==NULL )
                    return res;
                root=root->lchild;
            }
            else
            {
                res+=root->lcnt;
                if(root->rchild==NULL)
                    return res;
                root=root->rchild;
            }
        }
        else
        {
            if(b2)
            {
                if(root->rchild==NULL)
                    return res;
                root=root->rchild;
            }
            else
            {
                if(root->lchild==NULL)
                    return res;
                root=root->lchild;
            }
        }
    }
    return res;
}

int main()
{
    ll m,n,i,t,j,k;
    cin>>t;
    while(t--)
    {
        tri *root=new tri();
        Insert(root, 0);
        cin>>n>>k;
        ll tmp,tmp1,tmp2=0,res=0;
        for(ll i=0; i<n; i++)
        {
            cin>>tmp;
            tmp1 =tmp2^tmp;
            res+=(ll)query(root, tmp1, k);
            Insert(root, tmp1);
            tmp2=tmp1;
        }
        cout<<res<<endl;
    }
}
