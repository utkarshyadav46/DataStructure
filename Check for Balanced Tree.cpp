int height(Node *root)
{
    if(!root)
    return 0;
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    return max(lh,rh)+1;
}



bool isBalanced(Node *root)
{
    if(!root)
    return true;
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    if(abs(rh-lh)<=1 && isBalanced(root->left) && isBalanced(root->right))
    return true;
    
    return false;
    
}

