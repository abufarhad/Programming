//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category: Binary Search Tree Operations ( Insert, Search & Delete )
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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


struct node
{
    ll data;
    node * left , *right;
};


node* get_newnode(ll data)
{
     node *newnode=new node();
     newnode->data=data;
     newnode->left=newnode->right=NULL;

     return newnode;
}


node* Insert(node *root , ll data)
{
    if(root==NULL)root=get_newnode( data);

    else if(data <= root->data)root->left=Insert(root->left , data);
    else root->right=Insert(root->right , data);

    return root;
}

bool Search(node *root , ll data)
{
    if(root==NULL)return false;
    else if(root->data== data)return true;
    else if(data <=root->data )return Search( root->left , data);
    else return Search( root->right , data);
}

node *Find_minFromRight(node *root)
{
    //Consider to go left because in BST left always take min value
    while(root->left !=NULL)root=root->left;
    return root;
}


node * Delete(node *root , ll data )
{
    if(root==NULL)return root;
    else if( root->data > data )root->left=Delete(root->left, data);
    else if( root->data < data )root->right=Delete(root->right, data);
    else
    {
        ///Case 1: No child
        if(root->left==NULL and root->right==NULL)
        {
            delete root;  //for C we can use free operator
            root=NULL;
        }
        ///Case 2: One  child
        /* 3 step
        1. Create a temporary pointer to point current root address
        2. Current root point to left or right child
        3.Delete temporary pointer
        */
        else if(root->left==NULL )
        {
            struct node *tmp=root;
            root=root->right;
            delete tmp;
        }
        else if(root->right==NULL )
        {
            struct node *tmp=root;
            root=root->left;
            delete tmp;
        }
        ///Case 3: Two  child
        else
        {
            /* 3 step
            1.  find min value form right or find max value from left
            2.  Replace current root data to min or max data
            3.  Delete the min or max root data
            */
            //here consider to find min value from right

            struct node *tmp=Find_minFromRight(root->right);
            root->data=tmp->data;

            root->right=Delete(root->right , tmp->data);
        }
    }
    return root;
}

void print_Inorder(node *root)
{
    if(root==NULL)return;
    print_Inorder(root->left);
    cout<<root->data<<" ";
    print_Inorder(root->right);
}

int main()
{
    node *root=NULL ;

	root = Insert(root,5);
    cout<<root<<endl;
    root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4);
	root = Insert(root,1); root = Insert(root,11);
    cout<<root<<endl;

    cout<<"Tree Now"<<endl;
    print_Inorder(root);

    pn;
	ll n , x;

	cout<<"Enter how many number you want to Delete"<<endl;
	cin>>n;

	fr(i , n)
	{
	    scl(x);
        bool ok=Search(root , x);
	    if(ok)
        {
            cout<<"Data Found"<<endl;
            Delete(root , x);
            cout<<x<<" "<<"Deleted"<<endl;
        }
        else cout<<"Data not Found "<<endl;
	}

    cout<<"After Deletion Tree Now"<<endl;
    print_Inorder(root);

return 0;
}
