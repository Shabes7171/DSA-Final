#include<bits/stdc++.h>
using namespace std;
void swapSm(int arr[], int size, int f)
{
   if(f>=size) 
   {
     return ;
   } 
   if(arr[f]>arr[f+1])
   { 
     swap(arr[f], arr[f+1]);
    }
     swapSm(arr, size, f+1);
  
}
void sortArr(int arr[], int size)
{
     int f=0;
   if(size==1)
   {
     return ;
   }
   swapSm(arr, size, f);
   sortArr(arr, size-1);
}
int main()
{
     int arr[5]={5, 3, 7, 1, 2};
     int size = (sizeof(arr) / sizeof(arr[0])) - 1;
     sortArr(arr, size);
     for(int i=0; i< (sizeof(arr) / sizeof(arr[0])) - 1; i++)
     {
          cout<<arr[i]<<" ";
     }

}