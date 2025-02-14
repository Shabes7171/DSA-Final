//delete middle element from stack;
#include<bits/stdc++.h>
using namespace std;
void Delete_middle(stack<int>&s, int count, int size)
{
     

     //base case;
     if(count==size/2)
     {
       s.pop();
       return ; 
     }
     int ele=s.top();
     s.pop();
     Delete_middle(s, count+1, size);
     s.push(ele);
}
int main()
{
     stack<int>s;
     int size, count=0;
     cout<<"Enter the size of stack: ";
     cin>>size;
     int ele;
     for(int i=0; i<size; i++)
     {
          cin>>ele;
          s.push(ele);
     }
     Delete_middle(s, count, size);
     cout<<"Stack after deleting middle element: ";
     while(!s.empty())
     {
          cout<<s.top()<<" ";
          s.pop();
     }
 
}