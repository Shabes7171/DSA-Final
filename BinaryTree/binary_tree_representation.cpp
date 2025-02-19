#include<bits/stdc++.h>
using namespace std;
class Node{
     public:
     int data;
     Node* left;
     Node* right;
     Node(int data)
     {
       this->data=data;
       this->left=NULL;
       this->right=NULL;
     }
};
Node* buildTree(Node* root)
{
     cout<<"enter data: "<<endl;
     int data;
     cin>>data;
     root=new Node(data);
     if(data==-1)
     {
      return NULL;
     }
     cout<<"enter data for inserting in left: "<<endl;
     root->left=buildTree(root->left);
     cout<<"enter data for inserting in right: "<<endl;
     root->right=buildTree(root->right);
     return root;
}
void  LevelOrderTraversal(Node* root)
{
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty())
  {
    Node*temp=q.front();
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
void InorderTraversal(Node* root)
{
  if(root==NULL)
  {
    return;
  }
  InorderTraversal(root->left);
  cout<<root->data<<" ";
  InorderTraversal(root->right);

}
void preOrderTraversal(Node* root)
{
  if(root==NULL)
  {
    return;

  }
  cout<<root->data<<" ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}
void postOrderTraversal(Node*root)
{
  if(root==NULL)
  {
    return ;
  }
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout<<root->data<<" ";
 
}
void buildfromLevelOrder(Node*& root)
{
  queue<Node*>q;
  cout<<"enter data for root: "<<endl;
  int data;
  cin>>data;
  root=new Node(data);
  q.push(root);
  while(!q.empty())
  {
    Node* temp=q.front();
    q.pop();
    int data;
    cout<<"enter left node for: "<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;
    if(leftdata!=-1)
    {
      temp->left=new Node(leftdata);
      q.push(temp->left);
    }
    cout<<"enter right node for: "<<temp->data<<endl;
    int rightdata;
    cin>>rightdata;
    if(rightdata!=-1)
    {
      temp->right=new Node(rightdata);
      q.push(temp->right);
    }
  }
}
int main()
{
  Node*root=NULL;
 /* //tree creation;
  root=buildTree(root);
  //level order traversal;
  cout<<"printing level order traversal: "<<endl;
  LevelOrderTraversal(root);
  cout<<"inorder traversal: "<<endl;
  InorderTraversal(root);
  cout<<endl;
  cout<<"preorder traversal: "<<endl;
  preOrderTraversal(root);
  cout<<endl;
  cout<<"postorder traversal: "<<endl;
  postOrderTraversal(root);
  cout<<endl;
  return 0;
  */
 buildfromLevelOrder(root);
 cout<<"printing level order traversal: "<<endl;
 LevelOrderTraversal(root);
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1