#include<bits/stdc++.h>
using namespace std;
bool checkOnetoONEmapping(string s1, string s2)
{
  //one to one mapping from s1 to s2: 
  unordered_map<char, char>map;
  for(int i=0; i<s1.length(); i++)
  {
       if(map.find(s1[i])!=map.end())
       {
         if(map[s1[i]]!=s2[i])
         {
            return false;
         }
       }
       map[s1[i]]=s2[i];
  }
  return true;

}
bool isomorphic(string s1, string s2)
{
     if(s1.length()!=s2.length())
     {
          return false;
     }
     // check one to one mapping from s1 to s2;
     bool s1s2= checkOnetoONEmapping(s1, s2);
     bool s2s2= checkOnetoONEmapping(s2,s1);
     return  s1s2&&s2s2;
    
     

}
int main()
{
     string s1, s2;
     cout<<"enter string s1, s2: "<<endl;
     cin>>s1>>s2;
     bool result=checkOnetoONEmapping(s1,s2);
     if(result){
          cout<<s1<<" and "<<s2<<" are isomorphic "<<endl;
     }
     else{
          cout<<s1<<" and "<<s2<<" are not isomorphic "<<endl;
     }
     return 0;

}

// #1 input: abca;
//        xyzx;
// output: isomorphic:       

// #2 input: abca;
//        xyzp;
// output: not isomorphic:       

