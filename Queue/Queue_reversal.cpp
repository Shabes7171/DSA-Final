// #include<bits/stdc++.h>
// using namespace std;
// void QueueReverse(queue<int>& queue)
// {
//   stack<int>s;
//   while(!queue.empty())
//   {
//      s.push(queue.front());
//      queue.pop();
//   }
//   while(!s.empty())
//   {
//      queue.push(s.top());
//      s.pop();
//   }
// }
// int main()
// {
//      queue<int>q;
//      int size;
//      cout<<"Enter the size of queue: ";
//      cin>>size;
//      cout<<"Enter elements in queue: ";
//      for(int i=0; i<size; i++)
//      {
//           int x;
//           cin>>x;
//           q.push(x);
//      }

//      QueueReverse(q);
//      cout<<"Reversed Queue: ";
//      while(!q.empty())
//      {
//           cout<<q.front()<<" ";
//           q.pop();
//      }
     

// }

//using recursion;
#include<bits/stdc++.h>
using namespace std;
void stackIntoQueue(stack<int>s, queue<int>&queue)
{
  if(s.empty())
  {
     return;
  }
  queue.push(s.top());
  s.pop();
}
void QueueReverse(queue<int>& queue)
{
  stack<int>s;
  if(queue.empty())
  {
     return ;
  }
  s.push(queue.front());
  queue.pop();
  QueueReverse(queue);
  stackIntoQueue(s, queue);
  
}
int main()
{
     queue<int>q;
     int size;
     cout<<"Enter the size of queue: ";
     cin>>size;
     cout<<"Enter elements in queue: ";
     for(int i=0; i<size; i++)
     {
          int x;
          cin>>x;
          q.push(x);
     }

     QueueReverse(q);
     cout<<"Reversed Queue: ";
     while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
     

}