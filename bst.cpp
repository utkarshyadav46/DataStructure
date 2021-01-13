#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
int data;
struct node* left,*right;
};
struct node * root=NULL,* temp,*newnode;




//printting preo post and in oreder
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<< root->data;
        inorder(root->right);
    }

}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }

}
 void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
         cout<<root->data;
    }

}

int countnode(struct node *root)
{
if(root==NULL)
return 0;
return (1+ countnode(root->left) + countnode(root->right));
}

bool iscomplete(struct node *root ,int index,int number)
{
if(root==NULL)
return (true);
if(index>=number);
return (false);
return (iscomplete(root->left,2*index+1,number) + iscomplete(root->right,2*index+2,number));

}
int main()
{
cout<<"enter the number of element";
int n ;
cin>>n;
for(int i=0;i<n;i++)
{
 if(root==NULL)
 {
 root=(struct node *)malloc(sizeof(struct node));
 cout<<"enter root data";
 cin>>root->data;
 root->left=NULL;
 root->right=NULL;
 }
 else
 {
  newnode=(struct node *)malloc(sizeof(struct node *));
  cout<<"\nroot is present \n please enter data";
  cin>>newnode->data;
  newnode->left=NULL;
  newnode->right=NULL;
   temp=root;
  while(1)
   {
     if((temp->data)<(newnode->data))
        {
         if(temp->right!=NULL)
          temp=temp->right;
         else
           { 
           temp->right=newnode;
           break;
           }
        }
     else
     {
      if(temp->left!=NULL)
       temp=temp->left;
      else
         { 
       temp->left=newnode;
       break;
         }
     }
   }
 }
}
cout<<"\n";
inorder(root);
cout<<"\n";
preorder(root);
cout<<"\n";
postorder(root);
cout<<"\n";


//method for calculating complete tree;

int number=countnode(root);
int index=0;

if(iscomplete(root,index,number))
cout<<"tree is complete\n";
else
cout<<"tree is not complete\n";

return 0;
}
