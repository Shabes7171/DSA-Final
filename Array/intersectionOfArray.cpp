#include<bits/stdc++.h>
using namespace std;
// void intersection(int arr1[], int arr2[],int cal[], int size1, int size2)
// {

//   for(int i=0; i<size1; i++)
//   {
//      for(int j=0; i<size2; j++)
//      {
//         if(arr1[i]==arr2[j])
//         {
//           cout<<arr1[i]<<" ";
//           break;
//         }
//      }
//   }
// }

// int main()
// {
//      int size1,size2,cal[100];
//       cout<<"enter array 1 size1, and array 2 size2;"<<endl;
//       cin>>size1>>size2;
//       int arr1[100], arr2[100];
//       cout<<"enter elements for array 1: "<<endl;
//       for(int i=0; i<size1; i++)
//       {
//           cin>>arr1[i];
//       }
     
//       cout<<"enter elements for array 2: "<<endl;
//       for(int i=0; i<size2; i++)
//       {
//           cin>>arr2[i];
//       }
//       intersection(arr1, arr2,cal, size1,  size2);
     
// }

// 2nd method 
// vector<int> intersection(int arr1[], int arr2[], int size1, int size2)
// {
//      vector<int>ans;
//      for(int i=0; i<size1; i++)
//      {
//           int element=arr1[i];
//           for(int i=0; i<size2; i++)
//           {
//                if(arr2[i]==element)
//                {
//                     ans.push_back(element);
//                     arr2[i]=-1343224;
//                }
//           }
//      }
//      return ans;
// }
// int main()
// {
//      int size1, size2;
//      cout<<"enter array 1 size and array 2 size : "<<endl;
//      cin>>size1>>size2;
//      int arr1[100], arr2[100];
//      cout<<"enter array 1 elements: "<<endl;
//      for(int i=0; i<size1; i++)
//      {
//           cin>>arr1[i];
//      }
//      cout<<"enter array 2 elements: "<<endl;
//      for(int i=0; i<size2; i++)
//      {
//           cin>>arr2[i];
//      }
//   vector<int>result= intersection(arr1,arr2, size1, size2);
//   cout<<"print the intersection of arrays: "<<endl;
//   for(int ele:result)
//   {
//      cout<<ele<<" ";
//   }
//   cout<<endl;
// }/

//3rd approach
vector<int> intersection(int arr1[],int arr2[],int size1, int size2)
{
     int i=0, j=0;
     vector<int>ans;
  while(i<size1 && j<size2){
         
          {
               if(arr1[i]<arr2[j])
               {
                 i++;
                
               }
               else if(arr1[i]==arr2[j])
               {
                    ans.push_back(arr1[i]);
                    i++;
                    j++;
                   
               }
               else 
               {
                    j++;
                 
               }
          }
     }
     return ans;
     }
     int  main()
{
     int size1, size2;
     cout<<"enter array 1 size and array 2 size : "<<endl;
     cin>>size1>>size2;
     int arr1[100], arr2[100];
     cout<<"enter array 1 elements: "<<endl;
     for(int i=0; i<size1; i++)
     {
          cin>>arr1[i];
     }
     cout<<"enter array 2 elements: "<<endl;
     for(int i=0; i<size2; i++)
     {
          cin>>arr2[i];
     }
     vector<int>result =intersection(arr1,arr2, size1, size2);
     cout<<"the intersection will be "<<endl;
     for(int elem:result)
     {
          cout<<elem<<" ";
     }
     cout<<endl;

}