#include<bits/stdc++.h>
using namespace std;
int LPS(string str)
{
     vector<int>lps(str.size(), 0);
     int pre=0, suf=1;
     while(suf<str.size())
     {
          if(str[pre]==str[suf])
          {
               lps[suf]=pre+1;
               pre++, suf++;
          }
          else{
             if(pre==0)
             {
               lps[suf]=0;
               suf++;
             }
             else{
               pre=lps[pre-1];
             }
          }
     }
     return lps[str.size()-1];
}
int main()
{
     string str;
     cout<<"enter string: "<<endl;
     getline(cin, str);
     cout<<"longest prefix_sufix will be:"<<LPS(str);
     return 0;
}