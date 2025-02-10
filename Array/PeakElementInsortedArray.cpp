#include<bits/stdc++.h>
using namespace std;
int peak(int arr[], int size)

{
     int s=0, e=size-1;
     int mid=s+(e-s)/2;
     while(s<e)
     {
          if(arr[mid]<arr[mid+1])
          {
              s=mid+1;
          }
          else{
               e=mid;
          }
          mid=s+(e-s)/2;
     }
     return s;
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
    int reslt=peak(arr, size);
    cout<<"peak element is:" <<reslt<<endl;

}