#include<bits/stdc++.h>
using namespace std;
int arraysum(int arr[], int size)
{
  int sum=0;
  for(int i=0; i<size; i++)
     {
     sum+=arr[i];
     }
    return sum;
}
int main()
{
     int size;
     cout<<"enter array size : "<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elemenys: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     //calculate sum of array;
     // for(int i=0; i<size; i++)
     // {
     // sum+=arr[i];
     // }
     // cout<<"sum of array is = "<<sum;
     cout<<arraysum(arr, size);
     return 0;

}