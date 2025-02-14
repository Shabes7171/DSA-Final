// #include<bits/stdc++.h>
// using namespace std;
// pair<int ,int> pair_sum(int arr[], int n, int sum)
// {
//      for(int i=0; i<n; i++)
//      {
//        for(int j=1; j<n; j++)
//        {
//          if(arr[i]+arr[j]==sum)
//          {
//           return make_pair(i, j);
//          }
//        }
//      }
//      return make_pair(-1, -1);
// }
// int main()
// {
//      int size;
//      cout<<"Enter the size of array: ";
//      cin>>size;
//      int arr[size];
//      cout<<"Enter elements of array: ";
//      for(int i=0; i<size; i++)
//      {
//           cin>>arr[i];
//      }
//      int sum;
//      cout<<"Enter the sum: ";
//      cin>>sum;
//      pair<int, int> result = pair_sum(arr, size, sum);
//      if(result.first==-1 && result.second==-1)
//      {
//           cout<<"No pair found with given sum."<<endl;
//      }
//      else
//      {
//           cout<<"Pair found at index "<<result.first<<" and "<<result.second<<endl;
//      }
//      return 0;
// }

//#2 using map;

#include<bits/stdc++.h>
using namespace std;
vector<int> pair_sum(int arr[], int n, int sum)
{
    vector<int>ans(2, -1);
    unordered_map<int, int>mp;
    for(int i=0; i<n; i++)
    {
     if(mp.find(sum-arr[i])!=mp.end())
     {
          ans[0]=mp[sum-arr[i]];
          ans[1]=i;
          return ans;
     }
     else{
          mp[arr[i]]=i;
     }
    }
}
int main()
{
     int size;
     cout<<"Enter the size of array: ";
     cin>>size;
     int arr[size];
     cout<<"Enter elements of array: ";
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }
     int sum;
     cout<<"Enter the sum: ";
     cin>>sum;
     vector<int> result = pair_sum(arr, size, sum);
    cout<<result[0]<<", "<<result[1]<<endl;
    return 0;
}
