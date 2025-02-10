#include<bits/stdc++.h>
using namespace std;
void boobleSort(int arr[], int size)
{
     for(int i=0; i<size-1; i++)
     {
          for(int j=0; j<size-i; j++)
          {
               if(arr[j]>arr[j+1])
               {
                    swap(arr[j], arr[j+1]);
               }
          }
     }
}
void printarr(int arr[], int size)
{
     for(int i=0; i<size; i++)
     {
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main()
{
     int size;
     cout<<"enter array size: "<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     boobleSort(arr, size);
     printarr(arr, size);
}