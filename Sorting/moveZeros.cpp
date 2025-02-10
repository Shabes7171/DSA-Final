#include<bits/stdc++.h>
using namespace std;
void MoveZeros(int arr[], int size)
{
    int noneZero=0; 
    for(int i=0; i<size; i++)
    {
     if(arr[i]!=0)
     {
          swap(arr[i], arr[noneZero]);
          noneZero++;
     }
    }
}
void printarr(int arr[], int size)
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
     cout<<"Enter the size of array: ";
     cin>>size;
     int arr[size];
     cout<<"Enter the elements of array: ";
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     MoveZeros(arr, size);
     cout<<"Array after moving zeros to end: ";
     printarr(arr, size);
     return 0;
}