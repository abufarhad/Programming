#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

int ans;
node* insert_data(int value,node *root)
{
    node *new_node = new node();
    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;

    if (!root) { // Case 1
    root = new_node;
    return root;
    }

    node *current_root = root;
        while (1) {
        if (current_root->data > value) {
          if (current_root->left) // case 2
            current_root = current_root->left;
          else { // case 3
            current_root->left = new_node;
            break;
          }
        } else {
          if (current_root->right) // case 4
            current_root = current_root->right;
          else { // case 5
            current_root->right = new_node;
            break;
          }
        }
      }
      return root;

}


node *lca(node *rt, int v1,int v2)
{
    if(rt->data>v1 && rt->data>v2)
        rt=lca(rt->left,v1,v2);
    else if(rt->data<v1 && rt->data<v2)
        rt=lca(rt->right,v1,v2);
    else
        return rt;
    return rt;


}




void kount(int t,int con,node* rt)
{
    while(1)
    {

        if(t<rt->data)
        {
            ans=ans^rt->data;
            rt=rt->left;

        }
        else if(t>rt->data)
        {
            ans=ans^rt->data;
            rt=rt->right;
        }

        else if(t==rt->data)
        {
            if(t!=con)
                ans=ans^rt->data;
            break;
        }
    }
}

void print(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data;;
    print(root->left);

}


int main()
{
    int T,t=1;
    cin>>T;

    while(t<=T)
    {
        int n;
        cin>>n;
        node *root=NULL;

        int choice;
        cout<<"Case :"<<t<<endl;
        while(n--)
        {
            cin>>choice;
            if(choice==1)
            {
                int value;
                cin>>value;

             root=  insert_data(value,root);
            }
            else
            {
                int t1,t2;
                cin>>t1>>t2;
                node *p=root;
                node *meet=lca(p,t1,t2);
                ans=meet->data;
                kount(t1,meet->data,meet);
                kount(t2,meet->data,meet);
                cout<<ans<<endl;
                }


            }





    }
    return 0;
}
//node* lca(int t1,int t2,node *rt)
//{
//    while(1)
//    {
//        if(rt->data>t1 && rt->data>t2)
//            rt=rt->left;
//        else if(rt->data<t1 && rt->data<t2)
//            rt=rt->right;
//        else
//            break;
//
//    }
//    return rt;
//}


