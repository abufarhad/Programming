void fr_left( node   *root)
{
    if(root ==NULL) return ;
    fr_left(root->left);
    printf("%d ",root->data);
}

void fr_right(node  *root)
{
    if(root ==NULL) return ;
    printf("%d ",root->data);
    fr_right(root->right);
}

void topView(node  * root)
{
    fr_left(root);
    fr_right(root->right);
}

