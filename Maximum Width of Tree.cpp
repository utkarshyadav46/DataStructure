/*  Structure of a Binary Tree 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
/* Function to get the maximum width of a binary tree*/

int height(Node *root)
{
    if(!root)
    return 0;
    int l=height(root->left);
    int r=height(root->right);
    if(l>r)
    return l+1;
    return r+1;
}

int getwidth(Node *root,int level)
{
    if(!root)
    return 0;
    if(level==1)
    return 1;
    else if(level>1)
    return getwidth(root->left,level-1)+getwidth(root->right,level-1);
}

int getMaxWidth(Node* root)
{
    int max=0,w=0;
    int h=height(root);
    for(int i=1;i<=h;i++)
    {
        w=getwidth(root,i);
        if(max<w)
        max=w;
    }
    return max;
   // Your code here
}

