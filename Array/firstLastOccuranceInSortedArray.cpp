// first and last occureance in shorted array;
// #include<bits/stdc++.h>
// using namespace std;
// int firstOccurance(int arr[], int size, int key)
// {
//      int s=0, e=size-1,ans;
//      while(s<e)
//      {
//           int mid=s+(e-s)/2;
//           if(arr[mid]==key)
//           {
//                ans=mid;
//                e=mid-1;
//           }
//           else if(arr[mid]>key)
//           {
//                e=mid-1;
//           }
//           else{
//                s=mid+1;
//           }
//           mid=s+(e-s)/2;
//      }
//      return ans;
// }

// int LastOccurance(int arr[], int size, int key)
// {
//      int s=0, e=size-1,ans;
//      while(s<e)
//      {
//           int mid=s+(e-s)/2;
//           if(arr[mid]==key)
//           {
//                ans=mid;
//                s=mid+1;
//           }
//           else if(arr[mid]>key)
//           {
//                e=mid-1;
//           }
//           else{
//                s=mid+1;
//           }
//           mid=s+(e-s)/2;
//      }
//      return ans;
// }
// int main()
// {
//      int size;
//      cout<<"enter array size"<<endl;
//      cin>>size;
//      int arr[100];
//      cout<<"enter array elements: "<<endl;
//      for(int i=0; i<size; i++)
//      {
//           cin>>arr[i];
//      }
//      int key;
//      cout<<"enter key that you want to search: "<<endl;
//      cin>>key;
//      cout<<"first occurrence is at index "<<firstOccurance(arr, size, key)<<endl;
//      cout<<"last occurrence is at index "<<LastOccurance(arr, size, key);
//      return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int firstOccurance(int arr[], int size, int key)
{
     int s=0, e=size-1,ans;
     while(s<e)
     {
          int mid=s+(e-s)/2;
          if(arr[mid]==key)
          {
               ans=mid;
               e=mid-1;
          }
          else if(arr[mid]>key)
          {
               e=mid-1;
          }
          else{
               s=mid+1;
          }
          mid=s+(e-s)/2;
     }
     return ans;
}

int LastOccurance(int arr[], int size, int key)
{
     int s=0, e=size-1,ans;
     while(s<e)
     {
          int mid=s+(e-s)/2;
          if(arr[mid]==key)
          {
               ans=mid;
               s=mid+1;
          }
          else if(arr[mid]>key)
          {
               e=mid-1;
          }
          else{
               s=mid+1;
          }
          mid=s+(e-s)/2;
     }
     return ans;
}
int main()
{
     int size;
     cout<<"enter array size"<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int key;
     cout<<"enter key that you want to search: "<<endl;
     cin>>key;
     cout<<"first occurrence is at index "<<firstOccurance(arr, size, key)<<endl;
     cout<<"last occurrence is at index "<<LastOccurance(arr, size, key);
    
     return 0;
}

