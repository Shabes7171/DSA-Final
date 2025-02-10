#include<bits/stdc++.h>
using namespace  std;
bool SubArray_Of_Array(int arr1[], int arr2[], int size1, int size2)
{
     unordered_map<int, int>m;
     for(int i=0; i<size1; i++)
     {
       m[arr1[i]]=i;
     }
     for(int i=0; i<size2; i++)
     {
          if(m.find(arr1[i])==m.end())
          {
               return false;
          }
     }
     return true;
}
int main()
{
     int arr1[100], arr2[100], size1, size2;
     cout<<"enter array1 and array2 size: "<<endl;
     cin>>size1>>size2;
     cout<<"enter  elements for array 1"<<endl;
     for(int i=0; i<size1; i++)
     {
          cin>>arr1[i];

     }
     cout<<"enter elements for array 2"<<endl;
     for(int i=0; i<size2; i++)
     {
          cin>>arr2[i];
     }
     bool result = SubArray_Of_Array(arr1, arr2, size1, size2);
     if(result)
     {
          cout<<"array2 is a subarray of array1"<<endl;
     }
     else{
          cout<<"array2 is not a subarray of array1"<<endl;
     }
     return 0;    
}



