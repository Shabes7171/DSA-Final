#include<bits/stdc++.h>
using namespace std;
void sort(stack<int>&stk, int num)
{
     if(stk.empty() || (stk.top()<num && !stk.empty()))
     {
          stk.push(num);
          return ;
     }
     int temp=stk.top();
     stk.pop();
     sort(stk, num);
     stk.push(temp);


}
void SortStack(stack<int>&st)
{
     if(st.empty())
     {
          return ;
     }
     int temp=st.top();
     st.pop();
     SortStack(st);
     sort(st, temp);
}
int main()
{
     stack<int>st;
     int size;
     cout<<"Enter the size of array: ";
     cin>>size;
     cout<<"enter stack elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          int temp;
          cin>>temp;
          st.push(temp);
     }
     cout<<"Sorted Stack: ";
     SortStack(st);
     while(!st.empty())
     {
          cout<<st.top()<<" ";
          st.pop();
     }
}

// input: 7
// 3
// 9
// 2
// 4
// 5;
// output:  9 7 5 4 3 2 ;