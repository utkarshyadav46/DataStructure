/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
// Should print right view of tree
void right(Node *root,int level,int *maxlevel)
{
    if(root==NULL)
    return;
    if(*maxlevel<level)
    {
        cout<<root->data<<" ";
        *maxlevel=level;
    }
    right(root->right,level+1,maxlevel);
    right(root->left,level+1,maxlevel);
    
}


void rightView(Node *root)
{
    int maxlevel=0;
    right(root,1,&maxlevel);
   // Your Code here
}

