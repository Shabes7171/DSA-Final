#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
     for(int i=0; i<size; i++)
     {
          for(int j=1; j<=size; j++)
          {
               if(arr[i]>arr[j])
               {
                    swap(arr[i], arr[j]);

               }
          }
     }
}
void print(int arr[], int size)
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
     cout<<"enter array size: "<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     selectionSort(arr, size);
     print(arr, size);
}
