// #include<bits/stdc++.h>
// using namespace std;
// int sum_of_ele(int arr[], int size)
// {
//      unordered_map<int, int>mp;
//      int sum=0;
//      for(int i=0; i<size; i++)
//      {
//           mp[arr[i]]++;
//      }
//      for(auto &it: mp)
//      {
//           if(it.second>1)
//           {
//                sum+=it.first;
//           }
//      }
//      return sum;

// }
// int main()
// {
//      int arr[100], size;
//      cout<<"enter size of array: "<<endl;
//      cin>>size;
//      cout<<"enter array elements: "<<endl;
//      for(int i=0; i<size; i++)
//      {
//           cin>>arr[i];
//      }
//      cout<<"sum of duplicate elements: "<<sum_of_ele(arr, size);
//      return 0;
// }

//#2
#include<bits/stdc++.h>
using namespace std;
int sum_of_ele(int arr[], int size)
{
     int sum=0;
  for(int i=0; i<size; i++)
  {
     for(int j=1; j<size; j++)
     {
      if(arr[i]==arr[j])
      {
        sum+=arr[i];
      }

     }
  }
  return sum;
     
}
int main()
{
     int arr[100], size;
     cout<<"enter size of array: "<<endl;
     cin>>size;
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     cout<<"sum of duplicate elements: "<<sum_of_ele(arr, size);
     return 0;
}