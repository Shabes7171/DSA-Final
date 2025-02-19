#include<bits/stdc++.h>
using namespace std;
class Queue{
     public:
     int *arr;
     int front;
     int rear;
     int size;
     Queue(int size){
          this->size=size;
          arr=new int [size];
          front=0;
          rear=0;
     }
     bool Isfull()
     {
          if(rear==size-1)
          {
               return true;
          }
          return false;
     }
     void enqueue(int data)
     {
          if(Isfull())
          {
            cout<<"Queue is full. Can't enqueue "<<data<<endl;
            return;
          }
          else{
               arr[rear]=data;
               rear++;
          }
     }
     bool Isempty()
     {
          if(front==rear)
          {
               return true;
          }
          return false;
     }
     void Dequeue()
     {
          if(Isempty())
          {
            cout<<"Queue is empty. Can't delete ."<<endl;
            return;
          }
          else if(front==rear)
          {
               front=rear=0;
          }
          else{
               front++;
          }
     }
     int Front()
     {
          if(Isempty())
          {
               return -1;
          }
          else{
               return arr[front];
          }
     }

};
int main()
{
     Queue q(5);
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);
     q.enqueue(50);
     cout<<"Front element is "<<q.Front()<<endl;
     q.Dequeue();
     cout<<"After Dequeue Front element is "<<q.Front()<<endl;
     return 0;

}