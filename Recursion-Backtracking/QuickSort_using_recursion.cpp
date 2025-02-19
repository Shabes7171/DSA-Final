#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>&arr, int st, int end)
{
     int idx=st-1,  pivot=arr[end];
     for(int j=st; j<end; j++)
     {
          if(arr[j]<=pivot)
          {
            idx++;
            swap(arr[j], arr[idx]);

          }
     }
     idx++;
     swap(arr[idx], arr[end]);
     return idx; 
}
void QuickSort(vector<int>&arr, int st, int end)
{
     if(st<end)
     {
          int pivotIdx=Partition(arr, st, end);
          QuickSort(arr, st, pivotIdx-1);
          QuickSort(arr, pivotIdx+1, end);
     }
}
int main()
{
   vector<int>arr={12, 31, 35, 8, 32, 17};
   QuickSort(arr, 0, arr.size()-1);
   cout<<"Sorted array is: ";
   for(int i=0; i<arr.size(); i++)
   {
     cout<<arr[i]<<" ";
   }

}