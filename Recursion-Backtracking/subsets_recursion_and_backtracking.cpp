#include<bits/stdc++.h>
using namespace std;
void PrintSubsets(vector<int>&arr, vector<int>&ans, int i)
{
     if(i==arr.size())
     {
          for(int x: ans)
          cout<<x<<" ";
          cout<<endl;
          return;
     }
     //include ele;
     ans.push_back(arr[i]);
     PrintSubsets(arr, ans, i+1);

     //exclude ele;
     ans.pop_back();
     PrintSubsets(arr, ans, i+1);
}
int main()
{
     vector<int>arr={1, 2, 3};
     vector<int>ans;
     int i;
     PrintSubsets(arr, ans, i);
     return 0;
}

// Your Output
// 1 2 3 
// 1 2 
// 1 3 
// 1 
// 2 3 
// 2 
// 3 
 
//examples on leetscode 1.->78. Subsets, 2.->90. Subsets II;
