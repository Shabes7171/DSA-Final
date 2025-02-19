#include<bits/stdc++.h>
using namespace std;
bool Issorted(vector<int>&arr, int size)
{
     if(size==0 || size==1)
     {
          return true;
     }
     return arr[size-1]>=arr[size-2] && Issorted(arr, size-1);
}
int main()
{
     int size;
     cout<<"Enter the size of the array: ";
     cin>>size;
   vector<int>arr(size);
   cout<<"Enter the elements of the array: ";
   for(int i=0; i<size; i++)
   {
     cin>>arr[i];
   }
   cout<<(Issorted(arr, size)?"sorted": "not a sorted array");
   return 0;
  
}