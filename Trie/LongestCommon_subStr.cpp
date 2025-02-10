// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

#include<bits/stdc++.h>
using namespace std;
string Longest_Common_Pref(vector<string>&arr, int n)
{
     string ans;
     //for traversing all character of first string: 
     for(int i=0; i<arr[0].length(); i++)
     {
          char ch=arr[0][i];
          bool match=true;

          //for comparing ch with rest of the string:
          for(int j=1; j<n; j++)
          {
               if(arr[j].size()<=i || ch!=arr[j][i])
               {
                    match=false;
                    break;
               }
          }
          if(match==false)
          {
               break;

          }
          else{
               ans.push_back(ch);
          }
     }
     return ans;

}
int main()
{
     vector<string>arr;
     int size;
     cout<<"enter number of strings: "<<endl;
     cin>>size;
     cin.ignore();
     cout<<"enter strings: "<<endl;
     for(int i=0; i<size; i++)
     {
          string temp;
          getline(cin, temp);
          arr.push_back(temp);
     }
     // display;
     // cout<<"display"<<endl;
     // for(const string& str:arr)
     // {
     //     cout<<" "<<str<<endl;
     // }
     cout<<"longest common prefix is: "<<Longest_Common_Pref(arr, size)<<endl;
     return 0;
   


}