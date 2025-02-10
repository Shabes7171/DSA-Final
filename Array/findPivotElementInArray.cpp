// Example 1:

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
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
int main()
{
     int size;
     cout<<"enter array size:"<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements:" <<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     cout<<"the pivot element is present at index: "<<pivot(arr, size)<<endl;
}