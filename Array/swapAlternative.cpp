#include<bits/stdc++.h>
using namespace std;
void alternativeswap(int arr[], int size)
{
     for(int i=0; i<size; i+=2)
     if(i+1<size){
          {
          swap(arr[i], arr[i+1]);
     }
     }
     
}
void printarray(int arr[], int size)
{
     for(int i=0; i<size; i++)
     {
          cout<<arr[i]<<" ";
     }
}
int main()
{
     int size;
     cout<<"enter size: "<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     alternativeswap(arr, size);
     printarray(arr, size);
}
