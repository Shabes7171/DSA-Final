#include<bits/stdc++.h>
using namespace std;
bool check_anagram(string &s1, string &s2)
{
     unordered_map<char, int>mp;
     for(auto c1:s1)
     {
          mp[c1]++;
     }
     for(auto c2:s2)
     {
         if(mp.find(c2)==mp.end())
         {
          return false;
         }
         mp[c2]--;
     }
     for(auto ele:mp)
     {
       if(ele.second!=0)
       {
          return false;
       }
     }
     return true;
}
int main()
{
     string s1,  s2;
     cout<<"enter string s1, and s2: "<<endl;
     cin>>s1>>s2;
      if(check_anagram(s1, s2)) cout<<s1<<" and "<<s2<<" are anagrams."<<endl;
      else cout<<s1<<" and "<<s2<<" are not anagrams."<<endl;
     return 0;
    
}

// input: triangle
//        integral;
// output: yes anagram;       