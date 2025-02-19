#include<bits/stdc++.h>
using namespace std;
bool FindSubsetSum(vector<int>&arr, int sum, int tempsum, int idx)
{
     if(sum==tempsum)
     {
          return 1;
     }
     if(idx>=arr.size())
     {
          return 0;
     }
     bool fcall=FindSubsetSum(arr, sum, tempsum+arr[idx], idx+1);
     bool scall=FindSubsetSum(arr, sum, tempsum, idx+1);
     return fcall || scall;
}
int main()
{
     vector<int>arr={3, 34, 4, 12, 5, 2};
     int sum;
     int tempsum;
     // sum=13;
     sum=8;
     tempsum=0;
     if(FindSubsetSum(arr, sum, tempsum, 0))
     {
          cout<<"Yes, subset exists with given sum";
     }
     else{
          cout<<"No, subset doesn't exist with given sum";
     }
     return  0;
}



// input: 8;
// output: 1 yes 