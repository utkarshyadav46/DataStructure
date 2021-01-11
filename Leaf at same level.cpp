bool check(Node *root)
{
   
    queue<Node *>q;
    q.push(root);
    int level=1;
     set<int>v;
    while(1)
    {
        int s=q.size();
        if(s==0)
        break;
        while(s--)
        {
            Node *temp = q.front();
            q.pop();
            if(!temp->left && !temp->right)
                v.insert(level);
            
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        level++;
    }
    
    if(v.size()==1)
    return true;
    return false;
    //Your code here
}
