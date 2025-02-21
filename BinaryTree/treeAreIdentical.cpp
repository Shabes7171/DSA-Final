#include<bits/stdc++.h>
using namespace std;
class node
{
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
     cout<<"enter data: "<<endl;
     cin>>data;
     if(data==-1)
     {
          return NULL;
     }
     root=new node(data);
     cout<<"enter data for left child : "<<endl;
     root->left=buildTree(root->left);
     cout<<"enter data for right child: "<<endl;
     root->right =buildTree(root->right);\
     return root;

}
void levelOrderTraversal(node* root)
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

bool IsIdentical(node* root1, node* root2)
{
     if(root1==NULL && root2==NULL)
     {
          return true;
     }
     if(root1!=NULL && root2==NULL)
     {
          return false;
     }
     if(root2!=NULL && root1==NULL)
     {
          return false;
     }
     
     bool leftcheck=IsIdentical(root1->left, root2->left);
     bool rightcheck=IsIdentical(root1->right, root2->right);

     bool val=root1->data==root2->data;

     if(leftcheck && rightcheck && val)
     {
          return true;
     }
     else{
          return false;
     }
}
int main()
{
  node* root1=NULL;
  node* root2=NULL;
  cout<<"enter nodes data for tree 1: "<<endl;
  root1=buildTree(root1);
  cout<<"enter data for tree-2"<<endl;
  root2=buildTree(root2);
  cout<<"level order traversal of tree 1: "<<endl;
  levelOrderTraversal(root1);
  cout<<"\nlevel order traversal of tree 2: "<<endl;
  levelOrderTraversal(root2);
  bool check=IsIdentical(root1, root2);
  if(check)
  {
     cout<<"trees are identical"<<endl;
  }
  else{
     cout<<"trees are not identical"<<endl;
  }
  return 0;
 


}