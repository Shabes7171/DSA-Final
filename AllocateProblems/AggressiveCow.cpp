#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int size, int c, int mid)
{
   int cowCount=1;
   int lastpos=arr[0];
   for(int i=0; i<size; i++)
   {
     if(arr[i]-lastpos>=mid)
     {
          cowCount++;
          if(cowCount==c)
          {
               return true;
          }
          lastpos=arr[i];
     }
   }
   return false;
}
int AggressiveCow(int arr[], int size, int c)
{     
     sort(arr, arr+size);
     int s=0; 
     int maxi=-1;
     int ans=-1;
     int e;
     for(int i=0; i<size; i++)
     {
          maxi=max(maxi, arr[i]);
     }
     e=maxi;
     int mid=s+(e-s)/2;
     while(s<e)
     {
          if(isPossible(arr, size, c, mid))
          {
               ans=mid;
               s=mid+1;
          }
          else
          {
               e=mid-1;
          }
          mid=s+(e-s)/2;
     }
     return ans;
}
int main()
{
     int size;
     cout<<"enter number of distances: "<<endl;
     cin>>size;
     int c;
     cout<<"enter number of cow: "<<endl;
     cin>>c;
     int arr[100];
     cout<<"enter distances: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int result=AggressiveCow(arr, size, c);
     if(result)
     {
          cout<<"Minimum distance between cows is "<<result<<endl;
     }
     else{
          cout<<"Not possible to find minimum distance"<<endl;
     }
}