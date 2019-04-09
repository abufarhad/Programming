#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct
{
    ll data ;
    struct node*left;
    struct node* right;
};

struct node * newnode(ll data)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node.data=data;
    node.left=NULL;
    node.right=NULL;

    return (node);
};

int main()
{
    ll m,n,i,j,l;
    struct node *root=newnode(1);



}
