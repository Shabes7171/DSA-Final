#include<bits/stdc++.h>
using namespace std;
int  MergeParts(vector<int>&arr, int st, int mid, int end)
{
     int i=st, j=mid+1;
     int invcount=0;
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
               invcount+=mid-i+1;
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
     return invcount;
    
}
int mergeSort(vector<int>&arr, int st, int end)
{
     if(st<end)
     {
        int mid=st+(end-st)/2;
        //call for left part;
       int leftIn= mergeSort(arr, st, mid);
        //call for right part;
        int rightIn= mergeSort(arr, mid+1, end);
       int Incount= MergeParts(arr, st, mid, end);
        return leftIn+rightIn+Incount;
     }
     return 0;

}
int main()
{
     vector<int>arr={6, 3, 5, 2, 7};
     int end=arr.size()-1;
    int incount= mergeSort(arr, 0, end);
    cout<<"Number of inversions: "<<incount<<endl;
    return 0;
 
}