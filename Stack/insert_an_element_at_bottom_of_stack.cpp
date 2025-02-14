#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int>&st, int key)
{
   if(st.empty())
   {
     st.push(key);
     return ;
   }
   int temp = st.top();
   st.pop();
   insertAtBottom(st, key);
   st.push(temp);
}
int main()
{
     int size;
     cout<<"Enter the size of stck: ";
     cin>>size;
     stack<int>st;
     for(int i=0; i<size; i++)
     {
          int num;
          cin>>num;
          st.push(num);
     }
     cout<<"Enter the element to insert at bottom: ";
     int key;
     cin>>key;
     insertAtBottom(st, key);
     cout<<"Stack after inserting at bottom: ";
     while(!st.empty())
     {
          cout<<st.top()<<" ";
          st.pop();
     }

}

// input: 9
// 8
// 7
// 6
// output: 6 7 8 9 1;