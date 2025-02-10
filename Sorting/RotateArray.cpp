#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int size,int k)
{
     int temp[size];
     for(int i=0; i<size; i++)
     {
          temp[(i+k)%size]=arr[i];

     }
     for(int i=0; i<size; i++)
     {
          arr[i]=temp[i];
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
     int size, k;
     cout<<"enter array size: "<<endl;
     cin>>size;
     cout<<"enter position from which you want to rotate the array: "<<endl;
     cin>>k;
     int arr[size];
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     rotate(arr, size, k);
     printArr(arr, size);
     return 0;
}