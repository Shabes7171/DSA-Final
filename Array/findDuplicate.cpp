#include<bits/stdc++.h>
using namespace std;
// void duplicate(int arr[], int size)
// {
//      for(int i=0; i<size; i++)
//      {
//           for(int j=i+1; j<size; j++)
//           {
//                if(arr[i]==arr[j])
//                {
//                 cout<<"duplicate element is : "<<arr[i]<<endl;
//                     return;
 
//                }
//           }
//      }
//      cout<<"no duplicate elements found"<<endl;
// }
// int main()
// {
//      int size;
//      cout<<"size: "<<endl;
//      cin>>size;
//      int arr[100] ;
//      cout<<"enter array elements :"<<endl;
//      for(int i=0; i<size; i++)
//      {
//           cin>>arr[i];
//      }   
//      duplicate(arr, size); 
// }

// 2nd approach;
int duplicate(int arr[], int size)
{
     int ans=0;
     for(int i=0; i<size; i++)
     {
          ans=ans^arr[i];
     }
     for(int i=1; i<size; i++)
     {
          ans=ans^i;
     }
     return ans;
}
int main()
{
     int size;
     cout<<"array size :"<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter array elements :"<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     cout<<"duplicate is= "<<duplicate(arr, size);
}