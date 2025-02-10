#include<bits/stdc++.h>
using namespace  std;
void reverseArray(int arr[], int size)
{
 int s=0, end=size-1;
 while(s<=end)
 {
     swap(arr[s], arr[end]);
     s++;
     end--;
 }
}
void printarray(int arr[], int size)
   { for(int i=0; i<size; i++)
   {
     cout<<arr[i]<<endl;
   }
   }

int main()
{
     int size;
     cout<<"enter array size"<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements :"<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     reverseArray(arr, size);
   cout<<"print  reverse array : "<<endl;
   printarray(arr, size);
  
     
}