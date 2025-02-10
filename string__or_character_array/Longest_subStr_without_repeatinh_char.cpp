//longest substr without repeating characters: 
#include<bits/stdc++.h>
using namespace std;
int Lst_Substr(string str)
{
     int f=0, s=0;
     int len=0;
     vector<bool>count(256, 0);
     while(s<str.size())
     {
          while(count[str[s]])
          {
               count[str[f]]=0;
               f++;
          }
          count[str[s]]=1;
          len=max(len, s-f+1);
          s++;
     }
     return len;
}
int main()
{
     string str;
     cout<<"enter string: "<<endl;
     getline(cin, str);
     cout<<"length of longest substring without repeating characters: "<<Lst_Substr(str);
     return 0;


}