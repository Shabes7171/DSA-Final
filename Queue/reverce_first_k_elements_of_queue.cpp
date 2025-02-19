#include<bits/stdc++.h>
using namespace std;
void reverse_k_elements(queue<int>&q, int size, int k)
{
    stack<int>s;
    for(int i=0; i<k; i++)
    {
     s.push(q.front());
     q.pop();
    }
    while(!s.empty())
    {
     q.push(s.top());
     s.pop();
    }
    int t=q.size()-k;
    while(t--)
    {
     int val=q.front();
     q.pop();
     q.push(val);
    }
    
}
int main()
{
     int size;
     queue<int>q;
     cout<<"Enter the size of queue: ";
     cin>>size;
     for(int i=0; i<size; i++)
     {
          int ele;
          cin>>ele;
          q.push(ele);
     }
     int k;
     cout<<"enter kth term :"<<endl;
     cin>>k;
     reverse_k_elements(q, size, k);
     cout<<"Reversed Queue: ";
     for(int i=0; i<size; i++)
     {
      cout<<q.front()<<" ";
      q.pop();
    }
}

//size=7, elements: 1, 2, 3, 4, 5, 6, 7;
// k=3;
// output: 3, 2, 1, 4, 5, 6, 7;