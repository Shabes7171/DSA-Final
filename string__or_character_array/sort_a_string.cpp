// Enter a string: ababac
// Sorted string: aaabbc
#include<bits/stdc++.h>
using namespace std;
string sortStr(string str)
{
     int arr[26]={0};
     for(int i=0; i<str.size(); i++)
     {
          arr[str[i]-'a']++;
     }
     string ans;
     for(int i=0;i<26; i++)
     {
          char c='a'+i;
          while(arr[i])
          {
             ans+=c;
             arr[i]--;
          }
     }
     return ans;
     
}
int main()
{
     string str;
     cout<<"Enter a string: ";
     getline(cin, str);
     
     cout<<"Sorted string: "<<sortStr(str);
     return 0;
   
}
