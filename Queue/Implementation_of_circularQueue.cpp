#include<bits/stdc++.h>
using namespace std;
class circularQueue{
     public:
     int *arr;
     int front;
     int rear;
     int size;
     circularQueue(int size){
          this->size=size;
          arr=new int[size];
          front=-1;
          rear=-1;
     }
     bool Isfull()
     {
          if(rear==size-1 && front==rear)
          {
               return true;
          }
          return false;
     }
     bool Isempty(){
          if(front==-1)
          {
               return true;
          }
          return false;
     }
     bool Enqueue(int data)
     {
        if((front==0 && rear==size-1) || (rear==(front-1)%size-1))
        {
          cout<<"Queue is full"<<endl;
          return false;
        }
        else if(front==-1){
          front==0;
          rear==0;
          arr[rear]=data;
          
        }
        else if(rear==size-1 && front!=0){
           rear==0;
           arr[rear]=data;
        }
        else{
          rear++;
          arr[rear]=data;
        }
     }
     int Dequeue()
     {
          if(front==-1){
               cout<<"Queue is empty"<<endl;
   
            return -1;
          }
          int ans=arr[front];
          arr[front]=-1;
          // singlr ele present;
          if(front==rear){
               
               front=rear=-1;
          }
          else if(front==size-1)
          {
               front=0;
          }
          else{
                front++;
          }
          return ans;
     }

};
int main()
{
  circularQueue cq(5);
  cq.Enqueue(10);
  cq.Enqueue(20);
  cq.Enqueue(30);
  cq.Enqueue(40);
  cq.Enqueue(50);
  cout<<cq.Dequeue()<<endl;
}
/*
# IMPORTANT NOTE
#1 input restricted queue :
insert element only from rear end, push_front(2)
and delete from both end front-end as well as rear-end, pop_front(2), pop_back(2);

#2 output restricted queue:
deletion only from front-end; pop_front(2);
insertion from both end front-end as well as rear-end; pop_front(2), pop_back(2);

#3 Doubly eneded queue:
insertion and deletion can be performed from both front-end rear-end
*/