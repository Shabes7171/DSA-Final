//first non repeating character in a string:
#include<bits/stdc++.h>
using namespace std;
string NonRepeatingChar(string &str)
{
   unordered_map<char, int>count;
   queue<int>q;
   string ans;
   for(int i=0; i<str.length(); i++)
   {
     char c=str[i];
     count[c]++;
     q.push(c);
   }
   while(!q.empty())
   {
     if(count[q.front()]>1)
     {
          q.pop();
     }
     else{
          ans.push_back(q.front());
          break;
     }
    }
    if(q.empty())
    {
      ans.push_back('#');
    }
    return ans;


}
int main()
{
     string str="aab";
    string st= NonRepeatingChar(str);
    cout<<"string of non repeating:"<<st<<endl;
}

/*
input: "aab"
output: b;
*/