#include<bits/stdc++.h>
using namespace std;
pair<int, int>  maxFre(int arr[])
{
     unordered_map<int, int>count;
     int size=sizeof(arr);
     int ans=-1, max=INT_MIN;
     for(int i=0; i<size; i++)
     {
       count[arr[i]]++;
     }
     for(auto i:count)
     {
          if(i.second>max)
          {
               max=i.second;
               ans=i.first;
          }
     }
     return {ans, max};
}
int main()
{
     int arr[100], size;
     cout<<"enter the array size : "<<endl;
     cin>>size;
     cout<<"enter array elements: "<<endl;
     for(int i=0; i<size; i++)
     {
          cin>>arr[i];
     }

     pair<int, int>result=maxFre(arr);
     cout<<"max frequency numbers is: "<<result.first<<endl;
     cout<<"frequency is: "<<result.second<<endl;
     return 0;

}