#include<bits/stdc++.h>
using namespace std;
void sumOfMaxMin(int arr[], int k, int size, vector<int>&ans)
{
     
     for(int i=0; i<=size-k; i++)
     {
          int max=INT_MIN;
          int min=INT_MAX;
          for(int j=i; j<k+i; j++)
          {
               if(arr[j]>max)
               {
                    max=arr[j];
               }
               if(arr[j]<min)
               {
                    min=arr[j];
               }
              
          }
          int sum=min+max;
          ans.push_back(sum);
     }
     return ;
}
int main()
{
     int size;
     cout<<"Enter the size of the array: ";
     cin>>size;
     cout<<"Enter the elements of the array: ";
     int arr[size];
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int k;
     cout<<"Enter the value of k: ";
     cin>>k;
     vector<int> ans;
     sumOfMaxMin(arr, k, size, ans);
     cout<<"Sum of max and min of each subarray of size k: ";
     for(int i=0; i<ans.size(); i++)
     {
          cout<<ans[i]<<" ";
     }
}