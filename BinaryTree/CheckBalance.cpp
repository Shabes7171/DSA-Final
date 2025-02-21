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
    
     if(data==-1)
     {
          return NULL;
     }
     root=new node(data);
     cout<<"enter data for left child node: "<<endl;
     root->left=buildTree(root->left);
     cout<<"enter data for right child:"<<endl;
     root->right=buildTree(root->right);
     return root;
     
}

//traversal:

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
int heightOfTree(node* root)
{
     if(root==NULL)
     {
          return 0;
     }
     int leftH=heightOfTree(root->left);
     int rightH= heightOfTree(root->right);
     return max(leftH, rightH)+1;
}

//check tree is balanced or not;
//but O(n2) CT;
// bool isbalance(node* root)
// {
//      if(root==NULL)
//      {
//           return true;
//      }
//      bool left=isbalance(root->left);
//      bool right=isbalance(root->right);
//      bool Op3=(heightOfTree(root->left)-heightOfTree(root->right))<=1;
//      if(left && right && Op3)
//      {
//         return true;
//      }
//      else{
//           return false;
//      }
// }

//CT O(n);
pair<bool, int> FastCheckBalance(node* root) {
     if (root == NULL) {
         return {true, 0}; // Tree is balanced and height is 0
     }
 
     pair<bool, int> left = FastCheckBalance(root->left);
     pair<bool, int> right = FastCheckBalance(root->right);
 
     bool leftBalanced = left.first;
     bool rightBalanced = right.first;
     bool dif = abs(left.second - right.second) <= 1;
 
     pair<bool, int> ans;
     ans.second = max(left.second, right.second) + 1;
 
     if (leftBalanced && rightBalanced && dif) {
         ans.first = true;
     } else {
         ans.first = false;
     }
     return ans;
 }
bool isBalance(node* root)
{
     return FastCheckBalance(root).first;
}

int main()
{
     node* root1=NULL;
  
     cout<<"enter data for tree-1"<<endl;
     root1=buildTree(root1);
    
     cout<<"level order traversal:"<<endl;
     LevelOrderTraversal(root1);
     cout<<endl<<"is tree balanced: "<<isBalance(root1)<<endl;
     return 0;

}