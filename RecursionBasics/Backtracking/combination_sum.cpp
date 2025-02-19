#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>result;
void combinationSum(vector<int>&candidates,vector<int>temp, int target, int currSum, int idx )
{
     if(currSum>target)
     {
          return;
     }
     if(idx==candidates.size())
     {
          if(currSum==target)
          {
               result.push_back(temp);
          }
          return ;
     }
     currSum+=candidates[idx];
     temp.push_back(candidates[idx]);
     combinationSum(candidates,temp,target,currSum,idx);
     currSum-=candidates[idx];
     temp.pop_back();
     combinationSum(candidates,temp,target,currSum,idx+1);

}
int main()
{
     vector<int>candidates={2, 3, 6, 7};
     int target=7;
     vector<int>temp;
     combinationSum(candidates,temp,target,0,0);
     for(auto com:result)
     {
          cout<<"{";
       for(int val:com)
       {
          cout<<val<<" ";
       }
       cout<<"}"<<endl;
       
     }

}

// output:{2 2 3 }
// {7 }