/*
bool checknd(Node *root, int  minival, int  maxval )
{
    if(root==NULL )return true;
    if(root->data <=minival || root->data >=maxval ) return false;
    return ( checknd(root->left ,minival, root->data  )&&  checknd(root->right , root->data , maxval  ));
}


bool checkBST(Node* root) {
     if(root==NULL )return true;
     return ( checknd(root->left ,-1, root->data  ) && checknd(root->right , root->data , 10004  ));
}
*/
bool check(Node * root, int lo, int hi )
{
    if(root==NULL)return true;
    if(root->data <lo || root->data >hi ) return false;
    return ( check(root->left , lo, root->data -1 )&& check(root->right , root->data+1, hi) );
}

bool checkBST(Node* root) {
     return check( root, 0,10004);
     }
