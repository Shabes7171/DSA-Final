#include<bits/stdc++.h>
using namespace std;

int getmax(int arr[], int size)
{
    int max=INT_MIN;
    for(int i=0; i<size; i++)
    {
     if(arr[i]>max)
     {
          max=arr[i];
     }
    }
    return max;
}
int getmin(int arr[], int size)
{
    int min=INT_MAX;
    for(int i=0; i<size; i++)
    {
   if(arr[i]<min)
   {
     min=arr[i];
   }
    }
    return min;
}
int main()
{
     int size;
     int arr[100]; 
     cout<<"enter array size;"<<endl;
     cin>>size;
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }

 cout<<"maximum element is : "<< getmax(arr, size)<<endl;
 cout<<"manimum element is : "<< getmin(arr, size);
}