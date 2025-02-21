// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//      public:
//      int data;
//      node* left;
//      node* right;
//      node(int data)
//      {
//        this->data=data;
//        this->left=NULL;
//        this->right=NULL;
//      }
// };
// node* buildTree(node*root)
// {
//      int data;
//      cout<<"enter data: "<<endl;
//      cin>>data;
//      root=new node(data);
//      if(data==-1)
//      {
//           return NULL;
//      }
//      cout<<"enter data for left child:"<<endl;
//      root->left=buildTree(root->left);
//      cout<<"enter data for right child: "<<endl;
//      root->right=buildTree(root->right);
//      return root;
// }

// void LevelOrderTraversal(node* root)
// {
//      queue<node*>q;
//      q.push(root);
//      q.push(NULL);
//      while(!q.empty())
//      {
//           node*temp=q.front();
//           q.pop();
//           if(temp==NULL){
//            cout<<endl;
//           if(!q.empty()){
          
//                q.push(NULL);
//          }
//      }
//           else{
//                cout<<temp->data<<" ";
//                if(temp->left)
//                {
//                     q.push(temp->left);
//                }
//                if(temp->right)
//                {
//                     q.push(temp->right);
//                }
//           }
//      }

// }

// //inorder traversal:
// void inorder(node* root)
// {
//      if(root==NULL)
//      {
//           return ;
//      }
//      inorder(root->left);
//      cout<<root->data<<" ";
//      inorder(root->right);
// }
// int countNumberOfLeafNodes(node*root)
// {
//      if(root==NULL)
//      {
//           return 0;
//      }
//      if(root->left==NULL && root->right==NULL)
//      {
//         return 1;
//      }
//      return countNumberOfLeafNodes(root->left)+countNumberOfLeafNodes(root->right);
// }
// int heightOfTree(node* root)
// {
//      if(root==NULL)
//      {
//           return 0;
//      }
//      int left=heightOfTree(root->left);
//      int right=heightOfTree(root->right);
//      return max(left, right)+1;
// }
// int main()
// {
//      node*root=NULL;
//      root=buildTree(root);
//      cout<<"level order traversal of tree:"<<endl;
//      LevelOrderTraversal(root);
//      inorder(root);
//      cout<<"\nNumber of leaf nodes: "<<countNumberOfLeafNodes(root);

//      cout<<"\nHeight of tree: "<<heightOfTree(root);
//      cout<<endl;
//      return 0;
// }



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
  cout<<"enter data:"<<endl;
  cin>>data;
  root=new node(data);
  if(data==-1)
  {
     return NULL;
  }
  cout<<"enter data for left child: "<<endl;
  root->left=buildTree(root->left);
  cout<<"enter data for right child"<<endl;
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
int main()
{
  node* root=NULL;
  root=buildTree(root);
  cout<<"printing tree: "<<endl;
  LevelOrderTraversal(root);
}