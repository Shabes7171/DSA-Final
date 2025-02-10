// #include<bits/stdc++.h>
// using namespace std;
// void mergeSoretdarray( int arr1[], int arr2[], int arr3[], int size1, int size2)
// {
//      int i=0, j=0, k=0;
//      while(i<size1 && j<size2)
//      {
//           if(arr1[i]<arr2[j])
//           {
//             arr3[k]=arr1[i];
//             k++;
//             i++;
//           }
//           else{
//                arr3[k]=arr2[j];
//                k++;
//                j++;
//           }
//      }
//      while(i<size1)
//      {
//           arr3[k]=arr1[i];
//           k++;
//           i++;
//      }
//      while(j<size2)
//      {
//           arr3[k]=arr2[j];
//           k++;
//           j++;
//      }
// }
// void printmergedarray(int arr[], int size)
// {
//      for(int i=0; i<size; i++)
//      {
//           cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }
// int main()
// {
//      int size1, size2, arr1[100], arr2[100], arr3[100];
//      cout<<"enter array1 and array2 size: "<<endl;
//      cin>>size1>>size2;
//      cout<<"enter elements for array1: "<<endl;
//      for(int i=0; i<size1; i++)
//      {
//           cin>>arr1[i];
//      }
//      cout<<"enter elements for array2: "<<endl;
//      for(int i=0; i<size2; i++)
//      {
//           cin>>arr2[i];
//      }
//      int size3=size1+size2;
//      mergeSoretdarray(arr1, arr2, arr3, size1, size2);
//      cout<<"merged sorted array: "<<endl;
//      printmergedarray(arr3, size3);
//      return 0;
// }

// merge two sorted array without taking third array;
#include<bits/stdc++.h>
using namespace std;
void mergearray(int arr1[], int arr2[], int size1, int size2)
{
     int i=size1, j=0;
     while(i<size1+size2, j<size2)
     {
          arr1[i]=arr2[j];
          i++;
          j++;
     }
}
void printarray(int arr[], int size)
{
     for(int i=0; i<size; i++)
     {
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
 int main()
 {
     int size1, size2, arr1[100],arr2[100];
     cout<<"enter array1 and array2 size: "<<endl;
     cin>>size1>>size2;
     cout<<"enter elements for array1: "<<endl;
     for(int i=0; i<size1; i++)
     {
          cin>>arr1[i];
     }
     cout<<"enter elements for array2: "<<endl;
     for(int i=0; i<size2; i++)
     {
          cin>>arr2[i];
     }
     mergearray(arr1, arr2, size1, size2);
     cout<<"merged array: "<<endl;
     printarray(arr1, size1+size2);
     return 0;
 }