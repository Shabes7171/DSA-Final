// #include<bits/stdc++.h>
// using namespace std;
// void insertionSort(int arr[], int size)
// {
//      for(int i=1; i<size; i++)
//      {
//           int temp=arr[i];
//           int j=i-1;
//      for( j=i-1; j>=0; j--)
//           {
//                if(arr[j]>temp)
//                {
//                     arr[j+1]=arr[j];
//                }
//                else{
//                     break;
//                }
//           }
//           arr[j+1]=temp;
//      }
// }
// void printarr(int arr[], int size)
// {
//      for(int i=0; i<size; i++)
//      {
//           cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }
// int main()
// {
//   int size;
//   cout<<"Enter size of array: ";
//   cin>>size;
//   int arr[size];
//   cout<<"Enter elements of array: ";
//   for(int i=0; i<size; i++)
//   {
//      cin>>arr[i];
//   }
//   insertionSort(arr, size);
//   printarr(arr, size);
// }

//reverse an array;
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size)
{
      int s=0, e=size-1;
      while(s<e)
      {
            if(arr[s]>arr[e])
            {
                  swap(arr[s], arr[e]);
                  s++;
                  e--;
            }
      }

}
void printArr(int arr[], int size)
{
      for(int i=0; i<size; i++)
      {
            cout<<arr[i]<<" ";
      }
      cout<<endl;
}
int main()
{
      int size;
      cout<<"Enter size of array: ";
      cin>>size;
      int arr[size];
      cout<<"Enter elements of array: ";
      for(int i=0; i<size; i++)
      {
           cin>>arr[i];
      } 
      reverseArray(arr, size);
      cout<<"Print reverse array : "<<endl;
      printArr(arr, size);
     
} 
