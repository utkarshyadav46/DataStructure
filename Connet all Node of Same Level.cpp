void connect(Node *p)
{
   queue<Node *>q;
   q.push(p);
   p->nextRight=NULL;
   while(!q.empty())
   {
    
    int n=q.size();
    Node *prev=NULL;
    while(n--)
       {
        Node *temp=q.front();
             q.pop();

           if(temp->left)
           {
                q.push(temp->left);
           }
           if(temp->right)
           {
               q.push(temp->right);
           }
           
           if(prev)
           prev->nextRight=temp;
           
           prev=temp;
       }
       
       prev->nextRight=NULL;
     
       
   }
}
