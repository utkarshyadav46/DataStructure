bool isIdentical(Node *r1, Node *r2)
{
    if(!r1 and !r2)
    return true;
    if((r1==NULL and r2!=NULL) || (r1!=NULL and r2==NULL) )
    return false;
    
    if(r2->data==r1->data && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right))
    {
        return true;
    }
    
    return false;
    //Your Code here
}
