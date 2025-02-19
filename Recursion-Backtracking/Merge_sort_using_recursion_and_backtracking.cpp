#include<bits/stdc++.h>
using namespace std;
void MergeParts(vector<int>&arr, int st, int mid, int end)
{
     int i=st, j=mid+1;
     vector<int>temp;
     while(i<=mid && j<=end)
     {
          if(arr[i]<=arr[j])
          {
               temp.push_back(arr[i]);
               i++;
          }
          else{
               temp.push_back(arr[j]);
               j++;
          }
         
     }
     while(i<=mid)
     {
          temp.push_back(arr[i]);
          i++;
     }
     while(j<=end)
     {
          temp.push_back(arr[j]);
          j++;
     }
     for(int idx=0; idx<temp.size(); idx++)
     {
          arr[st+idx]=temp[idx];
     }
    
}
void mergeSort(vector<int>&arr, int st, int end)
{
     if(st<end)
     {
        int mid=st+(end-st)/2;
        //call for left part;
        mergeSort(arr, st, mid);
        //call for right part;
        mergeSort(arr, mid+1, end);
        MergeParts(arr, st, mid, end);

     }
}
int main()
{
     vector<int>arr={1, 6, 3, 4, 9, 2, 7};
     int end=arr.size()-1;
     mergeSort(arr, 0, end);
     for(auto i:arr)
     {
          cout<<i<<" ";
     }
     return 0;
}