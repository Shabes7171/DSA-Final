#include<bits/stdc++.h>
using namespace std;
void interLeaveQ(queue<int>&q, int size)
{
     queue<int>newQ;
     for(int i=0; i<size/2; i++)
     {
          int val=q.front();
          q.pop();
          newQ.push(val);
     }
     while(!newQ.empty())
     {
       int v= newQ.front();
        newQ.pop();
        q.push(v);
        int v1= q.front();
        q.pop();
        q.push(v1);
     }

}
int main()
{
     int size;
     cout<<"Enter the size of the array: ";
     cin>>size;
     queue<int>q;
     cout<<"enter queue elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          int x;
          cin>>x;
          q.push(x);
     }
     interLeaveQ(q, size);
     cout<<"Interleaved Queue: ";
     while(!q.empty())
     {
          cout<<q.front()<<" ";
          q.pop();
     }
}