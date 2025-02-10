#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[], int size)
{
     int s=0, e=size-1;
     int mid=s+(e-s)/2;
     while(s<e)
     {
          if(arr[mid]>=arr[0])
          {
               s=mid+1;
          }
          else{
               e=mid;
          }
          mid=s+(e-s)/2;
     }
     return s;
}
int binarySearch(int arr[], int s, int e, int key)
{

     int mid=s+(e-s)/2;
     while(s<=e)
     {
          if(arr[mid]==key)
          {
               return mid;
          }
           else if(arr[mid]<key)
          {
               s=mid+1;
          }
          else if(arr[mid]>key)
          {
               e=mid-1;
          }
          mid=s+(e-s)/2;
     }
     return -1;
}
int  RoBinaryS(int arr[], int size, int target)
{
     int pivort=pivot(arr, size);
     if(arr[pivort]<=target && arr[size-1]>=target)
     {
        return binarySearch(arr, pivort, size-1, target);
     }
     else{
          return binarySearch(arr, 0, pivort-1, target);
     }
}
int main()
{
     int size;
     cout<<"size of array: "<<endl;
     cin>>size;
     cout<<"enter array elements: "<<endl;
     int arr[100];
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int target;
     cout<<"enter the targeted value: "<<endl;
     cin>>target;
     int result=RoBinaryS(arr, size, target);
    if(result !=-1)
    {
     cout<<"target value found at index: "<<result<<endl;
    }
    else{
     cout<<"target value not found in the array"<<endl;
    }

}
