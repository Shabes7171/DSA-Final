#include<bits/stdc++.h>
using namespace std;
string sortSntnc(string s)
{
     vector<string >ans(10);
     string temp;
     int count=0, index=0;
     while(index<s.size())
     {
          if(s[index]==' ')
          {
               // int pos=temp[temp.size()-1]='0';
               int pos=temp.back()-'1';
               temp.pop_back();
               ans[pos]=temp;
               temp.clear();
               count++;

          }
          else{
               temp+=s[index];
               

          }
          index++;
     }
      int pos=temp.back()-'1';
               temp.pop_back();
               ans[pos]=temp;
               temp.clear();
               count++;
               
     string result;          
     for(int i=0; i<=count; i++)
     {
      result+=ans[i]+" ";
     }
     result.pop_back();
     return result;
   
} 
int main()
{
     string s;
     cout<<"enter sentence: "<<endl;
     getline(cin, s);
     cout<<"sorting string will be : "<<sortSntnc(s);
     
}