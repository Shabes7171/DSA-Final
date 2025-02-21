#include<bits/stdc++.h>
using namespace std;
class node
{
     public:
     int data;
     node*left;
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
     root=new node(data);
     if(data==-1)
     {
          return NULL;
     }
     cout<<"enter data for left child: "<<endl;
     root->left=buildTree(root->left);
     cout<<"enter data for right child: "<<endl;
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
int height(node* root)
{
     if(root==NULL)
     {
          return 0;
     }
     int leftHeight=height(root->left);
     int rightHeight=height(root->right);
     int ans=max(leftHeight, rightHeight)+1;
}
int main()
{
   node* root=NULL;  
   root=buildTree(root);
   cout<<"Level Order Traversal: "<<endl;
   LevelOrderTraversal(root);
   cout<<"\n Height of tree: "<<height(root);
   return 0;
 
}