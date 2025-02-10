// intput : test;
// output : t
#include<bits/stdc++.h>
using namespace std;
char maxOccChar(string str)
{
     char arr[26]={0};
     for(int i=0; i<str.length(); i++)
     {
          int num=0;
          char ch=str[i];
          if(ch>='a' && ch<='z')
          {
               num=ch-'a';
          }
          else{
               num=ch-'A';
          }
          arr[num]++;
     }
     int maxi=-1, ans=0;
     for(int i=0; i<26; i++)
     {
          if(maxi<arr[i])
          {
               ans=i;
               maxi=arr[i];
          }
     }
     char finalans=ans+'a';
     return finalans;
}
int main()
{
  string s;
  cout<<"enter string: "<<endl;
  getline(cin, s);
  
  cout<<"the maximum occuring character :"<<maxOccChar(s);
}