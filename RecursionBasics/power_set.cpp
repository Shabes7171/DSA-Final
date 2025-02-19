#include<bits/stdc++.h>
using namespace std;
void powerSet(string &str, string ans, int idx)
{
     if(str.size()==idx)
     {
          cout<<ans<<" ";
          return ;
     }
     //include;
     powerSet(str, ans+str[idx], idx+1);
     //exclude;
     powerSet(str, ans, idx+1);
     return ;
}
int main()
{
     string str="ABC";
     powerSet(str, " ", 0);
}