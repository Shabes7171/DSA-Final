#include<bits/stdc++.h>
using namespace std;
void binarysearch(int arr[], int size, int target)
{
  int s=0, e=size-1;
  while(s<e)
  {
     int mid=s+(e-s)/2;
     if(arr[mid]==target)
     {
          cout<<"target found at index "<<mid<<endl;
          return;
     }
     else if(arr[mid]<target)
     {
          s=mid+1;
     }
     else if(mid>target){
        e=mid-1;  
     }
     mid=s+(e-s)/2;
  }
  cout<<"target not found in the array"<<endl;
 
}
int main()
{
     int size;
     cout<<"enter size"<<endl;
     cin>>size;
     int target;
     cout<<"enter targeted number that you wantn ro search:  "<<endl;
     cin>>target;
     int arr[size];
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     binarysearch(arr, size, target);

}
