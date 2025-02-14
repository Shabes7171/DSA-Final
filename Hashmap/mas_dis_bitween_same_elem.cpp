// #include<bits/stdc++.h>
// using namespace std;
// int max_dis(int arr[], int size)
// {
//      int maxi=0;
//      for(int i=0; i<size; i++)
//      {
//           for(int j=1; j<size; j++)
//           {
//                if(arr[i]==arr[j])
//                {
//                     maxi=max(maxi, j-i);
//                }
//           }
//      }
//      return maxi;
// }
// int main()
// {
//      int size, arr[100];
//      cout<<"enter array size:  "<<endl;
//      cin>>size;
//      cout<<"enter array elements: "<<endl;
//      for(int i=0; i<size; i++)
//      {
//           cin>>arr[i];
//      }
//      cout<<"max distance between two same elements is: "<<max_dis(arr, size);
//      return 0;


// }

//#2
#include<bits/stdc++.h>
using namespace std;
int max_dis(int arr[], int size)
{
     int maxi=0;
     unordered_map<int, int>mp;
     for(int i=0; i<size; i++)
     { // element is not present;
          if(mp.find(arr[i])==mp.end())
          {
               mp[arr[i]]=i;
          }
           //element is present
          else{
             maxi=max(maxi, i-mp[arr[i]]);
          }
     }
    
     return maxi;
}
int main()
{
     int size, arr[100];
     cout<<"enter array size:  "<<endl;
     cin>>size;
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
      cout<<"max distance between two same elements is: "<<max_dis(arr, size);
 
     return 0;


}