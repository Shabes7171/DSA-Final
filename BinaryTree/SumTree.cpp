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
pair<bool, int> IsSumTree(node* root)
{
     if(root==NULL)
     {
          pair<bool, int>p=make_pair(true, 0);
          return p;
     }
     if(root->left==NULL && root->right==NULL)
     {
          pair<bool, int>p=make_pair(true, root->data);
          return p;
     }
     pair<bool, int>leftAns=IsSumTree(root->left);
     pair<bool, int>rightAns=IsSumTree(root->right);

     bool left=leftAns.first;
     bool right=rightAns.first;

     bool condi=root->data==leftAns.second+rightAns.second;
     pair<bool, int>ans;
     if(left && right && condi)
     {
          ans.first=true;
          ans.second=2*root->data;
     }
     else{
          ans.second=false;
          
     }
     return ans;
}
int main()
{
     node* root=NULL;
     root=buildTree(root);
     cout<<"level order traversal is: "<<endl;
     levelOrderTraversal(root);
     bool check=IsSumTree(root).first;
     if(check)
     {
          cout<<"given tree is sum tree"<<endl;
     }
     else{
          cout<<"given tree is not a sum tree"<<endl;
     }

     return 0;
}