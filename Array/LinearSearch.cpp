#include<bits/stdc++.h>
using namespace std;
bool searching(int arr[], int size, int num)
{
  for(int i=0; i<size; i++)
  {
     if(arr[i]==num)
     {
          return 1;
     }
     
  }
  return 0;
}
int main()
{    int size;
     cout<<"enter array size: "<<endl;
     cin>>size;
     int num;
     cout<<"enter num you want to search: "<<endl;
     cin>>num;
     int arr[10];
     cout<<"enter arrray elements: "<<endl;
     for(int i=0; i<=size; i++)
     {
          cin>>arr[i];
     }
    if(searching(arr, size,num))
    {
     cout<<"present"<<endl;

    }
    else{
     cout<<"not present"<<endl;
    }

}