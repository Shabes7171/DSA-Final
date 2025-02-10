#include<bits/stdc++.h>
using namespace std;
bool checkArrayRoAndSorted(int arr[], int size)
{
     int count=0;
     int n=size;
     for(int i=1; i<size; i++)
     {
          if(arr[i-1]>arr[i])
          {
               count++;
          }
     }
     if(arr[n-1]>arr[0])
     {
          count++;
     }
     return count>=1;

}
int main()
{
     int size;
     cout<<"Enter the size of array: ";
     cin>>size;
     int arr[size];
     cout<<"Enter elements: ";
     for(int i=0; i<size; i++)
     {
           cin>>arr[i];
     }
     if(checkArrayRoAndSorted(arr, size))
     {
          cout<<"The array is rotated and sorted in non-decreasing order."<<endl;
     }
     else{
          cout<<"The array is not rotated and sorted in non-decreasing order."<<endl;
     }
     return 0; 
}

//ex 3 4 5 1 2;