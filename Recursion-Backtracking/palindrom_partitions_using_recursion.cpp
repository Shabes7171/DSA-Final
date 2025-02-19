#include<bits/stdc++.h>
using namespace std;
bool isPalindrom(string part)
{
     int s=0, e=part.size()-1;
     for(int i=0; i<part.size(); i++)
     {
       if(part[s++]!=part[e--])
       {
          return false;
       }
     }
     return true;
}
void getAllParts(string &s, vector<string>&partitions, vector<vector<string>>&ans)
{
     if(s.size()==0)
     {
          ans.push_back(partitions);
          return;
     }
     for(int i=0; i<s.size(); i++)
     {
          string part=s.substr(0, i+1);
         if(isPalindrom(part))
         {
          partitions.push_back(part);
          string min=s.substr(i+1);
          getAllParts(min, partitions, ans);
          partitions.pop_back();
         }

     }
}
int main()
{
     string s="AAB";
     vector<string>partitions;
     vector<vector<string>>ans;
     getAllParts(s, partitions, ans);
     for(auto v:ans)
     {
          for(auto str:v)
          {
             cout<<str<<",";
          }
          cout<<endl;
     }
}