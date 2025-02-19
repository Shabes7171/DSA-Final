#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void getSubsets(vector<int>&arr, vector<int>temp, int idx)
{
  if(idx==arr.size())
  {
     ans.push_back(temp);
     return;
  }
  temp.push_back(arr[idx]);
  getSubsets(arr, temp, idx+1);
  temp.pop_back();
  getSubsets(arr, temp, idx+1);
  return ;


}
int main(){
     vector<int>arr={1, 2, 3};
     vector<int>temp;
     getSubsets(arr, temp, 0);
     for(auto &v:ans)
     {
          for(auto &i:v)
          {
             cout<<i<<" ";
          }
          cout<<endl;
          
     }
     return 0;

}