#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* left;
  node* right;
  node(int data)
  {
     this->data=data;
     this->left=NULL;
     this->right=NULL;
  }
};
node* buildTree(node* root)
{  
  int data;
  cout<<"enter data"<<endl;
  cin>>data;
  root=new node(data);
  if(data==-1)
  {
     return NULL;
  }
  cout<<"enter the left child: "<<endl;
  root->left=buildTree(root->left);
  cout<<"enter right child: "<<endl;
  root->right=buildTree(root->right);
  return root;
}

void LevelOrderTraversal(node* root)
{
     queue<node*>q;
     q.push(root);
     q.push(NULL);
     while(!q.empty())
     {
          node* temp=q.front();
          q.pop();
          if(temp==NULL)
          {
               cout<<endl;
               if(!q.empty())
               {
                    q.push(NULL);
               }
          }
          else{
               cout<<temp->data<<" ";
               if(temp->left)
               {
                    q.push(temp->left);

               }
               if(temp->right)
               {
                    q.push(temp->right);
               }
          }
     }
}
//cont no of leaf nodes in a tree;
int countLeaf(node*root)
{
     if(root==NULL)
     {
          return 0;
     }
     if(root->left==NULL && root->right==NULL)
     {
          return 1;
     }
     return countLeaf(root->left)+countLeaf(root->right);
 
}


int main()
{
  node* root=NULL;
  root=buildTree(root);
  cout<<"level order traversal: "<<endl;
  LevelOrderTraversal(root);
  cout<<"number of leaf nodes: "<<countLeaf(root);

  return 0;
 
}
