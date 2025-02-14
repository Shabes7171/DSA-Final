#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int size)
{
     unordered_map<int, int>mp;  
  for(int i=0; i<size; i++)
  {
     if(mp.find(arr[i])!=mp.end())
     {
          cout<<"Duplicate element found: "<<arr[i]<<endl;
          return 0;
     }
     else{
          mp[arr[i]]++;
     }

  }
  return -1;
}
int main()
{
     int size, arr[size];
     cout<<"Enter the size of the array: ";
     cin>>size;
     cout<<"Enter the elements of the array: ";
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int result=duplicate(arr, size);
     if(result==-1)
     {
          cout<<"No duplicate elements found."<<endl;
     }
     else{
          cout<<"Duplicate elements found."<<endl;
     }

     return 0;
}