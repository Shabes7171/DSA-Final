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
void LevelOrderTrversal(node* root)
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


//TC=O(n2);




// int DiameterOfTree(node* root)
// {
//      if(root==NULL)
//      {
//           return 0;
//      }
     
//      if(root->left==NULL && root->right==NULL)
//      {
//           return 1;
//      }
     
//      int p3=DiameterOfTree(root->left)+DiameterOfTree(root->right)+1;
//      int p2=DiameterOfTree(root->left);
//      int p1=DiameterOfTree(root->right);
//      return max(p1,max(p2,p3));
  
// }

//TC=O(n2);
pair<int, int>FastDiameter(node* root)
{
     if(root==NULL)
     {
          pair<int, int>p=make_pair(0, 0);
          return p;
     }
     pair<int, int>left=FastDiameter(root->left);
     pair<int, int>right=FastDiameter(root->right);
     int op1=left.first;
     int op2=right.first;
     int op3=left.second+right.second;
     pair<int, int>ans;
     ans.first=max(op1, max(op2, op3));;
     ans.second=max(left.second, right.second)+1;
     return ans;
}
int DiameterOfTree(node* root)
{
     return FastDiameter(root).first;
}
int main()
{
     node* root=NULL;
     root=buildTree(root);
     cout<<"level order traversal: "<<endl;
     LevelOrderTrversal(root);
     cout<<"diameter of tree: "<<DiameterOfTree(root);
     //cout<<maxDiameter<<endl;
     return 0;

}