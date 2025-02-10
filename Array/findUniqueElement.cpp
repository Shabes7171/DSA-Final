#include<bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int size)
{
    int unique=0;
    for(int i=0; i<size; i++)
    {
     unique=unique^arr[i];
    }
    return unique;
}
int main()
{
     int size;
     cout<<"enter size"<<endl;
     cin>>size;
     int arr[100];
     cout<<"enter elements "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     cout<<findUnique(arr, size);
     

 }