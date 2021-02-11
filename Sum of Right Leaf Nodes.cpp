/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// function should return the sum of all 
// right leaf nodes
int isleaf(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    return 1;
    return  0;
}


int rightLeafSum(Node* root)
{
    int sum=0;
    if(root!=NULL)
    {
        if(isleaf(root->right))
        {
            sum=sum+root->right->data;
        }
        else
        {
            sum=sum+rightLeafSum(root->right);
        }
        sum=sum+rightLeafSum(root->left);
    }
    return sum; //Code here
     
}
