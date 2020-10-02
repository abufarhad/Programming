//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")
#define inf                 1e18

struct node
{
    ll data;
    node *left , *right;
};

node* get_tmp(ll data)
{
     node *tmp=new node();
     tmp->data =data;
     tmp->left=tmp->right=NULL;

     return tmp;
}


node * Insert(node *root , ll data)
{
    if(root==NULL)root=get_tmp(data);
    else if(data <= root->data)root->left=Insert(root->left , data);
    else root->right=Insert(root->right , data);

    return root;
}

void print_Inorder(node *root)
{
    if(root==NULL)return;
    print_Inorder(root->left);
    cout<<root->data<<" ";
    print_Inorder(root->right);
}


bool isBST(node *root , ll mn_val , ll mx_val )
{
    if(root==NULL)return true;
    if( root->data> mn_val  && root->data< mx_val
       &&  isBST(root->left, mn_val , root->data)
       &&  isBST(root->right , root->data , mx_val)    ) return true;
    else return false;
}

int main()
{
    node *root=NULL;

    root=Insert(root , 1);
    root=Insert(root , 5);
    root=Insert(root , 6);
    root=Insert(root , 3);
    root=Insert(root , 2);

    print_Inorder(root );

    pn;
    ///Two way to check
    //Check if in-order traversal become sorted it must BST
    //Check using min and max data comparison
    if(isBST(root , -inf , inf ))pys;
    else pno;

return 0;
}

