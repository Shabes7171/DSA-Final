#include<bits/stdc++.h>
using namespace std;
void reverseStack(stack<int>&st)
{
     int temp=st.top();
     st.pop();
     if(st.empty())
     {
          st.push(temp);
     }
      reverseStack(st);
     st.push(temp);
}
int main()
{
     stack<int>st;
     int size;
     cout<<"Enter the size of the stack: ";
     cin>>size;
     for(int i=0; i<size; i++)
     {
       int num;
       cin>>num;
       st.push(num);
     }
     cout<<"Original Stack: ";
     while(!st.empty())
     {
          cout<<st.top()<<" ";
          st.pop();
     }

}