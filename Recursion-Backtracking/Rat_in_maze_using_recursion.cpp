#include<bits/stdc++.h>
using namespace std;
//complete this function;
void helper(vector<vector<int>>&mat, int r, int c, string path, vector<string>&ans, vector<vector<bool>>&vist)
{ 

     int n=mat.size();
     if(r<0 || c<0 ||r>=n || c>=n || mat[r][c]==0 || vist[r][c]==true)
     {
          return ;
     }
     if(r==n-1 && c==n-1)// ans store;
     {
          ans.push_back(path);
          return ;
     }
     vist[r][c]=true;
 //down call;
 helper(mat, r+1, c, path+"D", ans, vist);
 //up
 helper(mat, r-1, c, path+"U", ans, vist);
 //left;
 helper(mat, r, c-1, path+"L", ans, vist);
 //right;
 helper(mat, r, c+1, path+"R", ans, vist);
 vist[r][c]=false;
 
}
vector<string>findPath(vector<vector<int>>&mat)
{ 
     int n=mat.size();
     vector<string>ans;
     string path="";
     vector<vector<bool>>vist(n, vector<bool>(n, false));
     helper(mat, 0, 0, path, ans, vist);
     return ans;
  
}
int main()
{
     vector<vector<int>>mat={{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
     vector<string>ans=findPath(mat);
     for(string path: ans)
     {
          cout<<path<<endl;
     }
     return 0;
}