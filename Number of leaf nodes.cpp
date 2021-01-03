int countLeaves(Node* root)
{
  // Your code here
  int count=0;
  queue<Node *>q;
  q.push(root);
  while(!q.empty())
  {
      Node *temp=q.front();
      q.pop();
      if(!temp->left && !temp->right)
      count++;
      if(temp->left)
      q.push(temp->left);
      if(temp->right)
      q.push(temp->right);
  }
  
  return count;
}
