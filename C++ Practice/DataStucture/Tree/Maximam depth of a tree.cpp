#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x++)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})

#define file_read(filename)  freopen("input.txt","r",stdin);
#define file_write(filename)  freopen("output.txt","w",stdout);

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)


struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int minDepth(struct node *root)
{
    // Corner case. Should never be hit unless the code is
    // called on root = NULL
    if (root == NULL)
        return 0;

    // Base case : Leaf Node. This accounts for height = 1.
    if (root->left == NULL && root->right == NULL)
       return 1;

    // If left subtree is NULL, recur for right subtree
    if (!root->left)
       return minDepth(root->right) + 1;

    // If right subtree is NULL, recur for left subtree
    if (!root->right)
       return minDepth(root->left) + 1;

    return min(minDepth(root->left), minDepth(root->right)) + 1;
}

int maxdepth(struct node* node)
{
    if(node==NULL) return 0;
    else
    {
        int ldepth=maxdepth(node -> left);
        int rdepth=maxdepth(node -> right);
        return max(ldepth,rdepth)+1;
    }
}

struct node* newnode(int data)
{
   struct node* node=(struct node*) malloc(sizeof(struct node));
   node->data=data;
   node->left=NULL;
   node->right=NULL;
   return(node);
};

int main()
{
    struct node *root=newnode(1);

    root->left=newnode(2);
     root->right=newnode(3);
     root->left->left = newnode(4);
    root->left->right = newnode(5);

    printf("Max Hight of tree is %d\n", maxdepth(root));
     printf("Min Hight of tree is %d", minDepth(root));
}

