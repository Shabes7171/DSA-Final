//Q SAID-> given an array of distinct integers, return all possible permutations, you can return the ans in any order;
#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&arr, vector<vector<int>>&ans, int idx)
{
     if(idx==arr.size())
     {
        ans.push_back(arr);
        return;
     }
     for(int i=idx; i<arr.size(); i++)
     {
          swap(arr[i], arr[idx]);
          permutation(arr, ans, idx+1);
          swap(arr[idx], arr[i]);
     }
     return;
}
int main()
{
     vector<int>arr={1, 2, 3};
     vector<vector<int>>ans;
     permutation(arr, ans, 0);
     for(auto &v: ans)
     {
          for(auto &i:v)
          {
               cout<<i<<" ";
          }
          cout<<endl;
     }
     return 0;

}