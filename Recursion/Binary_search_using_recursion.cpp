#include<bits/stdc++.h>
using namespace std;
int helpsearch(vector<int>&arr, int tar, int s, int e)
{
  if(s<=e)
  {
   int mid=s+(e-s)/2;
   if(mid==tar)
   {
     return mid;
   }
   if(tar>mid)
   {
     return helpsearch(arr, tar, mid+1, e);
   }
   else{
     return helpsearch(arr, tar,s, mid-1);
   }
  }
  return -1;
}
int BinSearch(vector<int>&arr, int tar)
{
   int s=0, e=arr.size()-1;
   helpsearch(arr, tar, s, e);
}
int main()
{
     int size;
     cout<<"Enter the size of the array: ";
     cin>>size;
     vector<int>arr(size);
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int tar;
     cout<<"Enter the target element: ";
     cin>>tar;
     int pos=BinSearch(arr, tar);
     cout<<pos;
}