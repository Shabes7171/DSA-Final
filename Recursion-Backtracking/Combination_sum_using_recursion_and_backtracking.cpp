#include<bits/stdc++.h>
using namespace std;
set<vector<int>>s;
void getCombination(vector<int>&arr, int idx, vector<int>&combination, vector<vector<int>>&ans, int tar)
{
    
     if(idx==arr.size() || tar<0)
     {
       return ;
     }
     if(tar==0)
     {
          if(s.find(combination)==s.end())
        {
           ans.push_back(combination);
           s.insert(combination);
        }
          return ;
     }
     //for single store;
     combination.push_back(arr[idx]);
     getCombination(arr, idx+1, combination, ans, tar-arr[idx]);
     //for multitimes store;
     getCombination(arr, idx, combination, ans, tar-arr[idx]);
     combination.pop_back();
     getCombination(arr, idx+1, combination, ans, tar);
}
int main()
{
     vector<int>arr={2, 3, 5};
     int tar=8;
     vector<int>combination;
     vector<vector<int>>ans;
     getCombination(arr,0 ,combination, ans, tar);
     cout<<"All Combinations are: \n";
     for(auto &com:ans)
     {
          cout<<"[";
            for(int num:com)
            {
               cout<<num<<" ";
            }
            cout<<"]"<<endl;
     }

}