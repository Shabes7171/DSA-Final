// #include<bits/stdc++.h>
// using namespace  std; 
// void getPermu(vector<int>&permu, vector<vector<int>>&ans, int idx)
// {
//      if(idx==permu.size())
//      {
//           ans.push_back(permu);
//           return;
//      }
//      for(int i=idx; i<permu.size(); i++)
//      {
//           swap(permu[i], permu[idx]);
//           getPermu(permu, ans, idx+1);
//           swap(permu[i], permu[idx]);

//      }
// }
// int main()
// {
//      vector<int>permu={1,2,3};
//      vector<vector<int>>ans;
//      getPermu(permu, ans, 0);
//      for(auto &v:ans)
//      {
//           for(int num: v)
//           {
//                cout<<num<<" ";
//           }
//           cout<<endl;
//      }
// }

//printing permutation for string;

#include<bits/stdc++.h>
using namespace std;
void getPermu(string &str, int idx)
{
 if(idx==str.size())
 {
     cout<<str<<endl;
     return ;
 }
 for(int i=idx; i<str.size(); i++)
 {
     swap(str[idx], str[i]);
     getPermu(str, idx+1);
     swap(str[idx], str[i]);
 }
}
int main()
{
     string str="ABC";
     getPermu(str, 0);
     return 0;
}