#include<bits/stdc++.h>
using namespace std;
string replace_space(string str)
{
     string temp;
     for(int i=0; i<str.length(); i++)
     {
          if(str[i]==' ')
          {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
          }
          else{
               temp.push_back(str[i]);
          }
     }
     return temp;
}
int main()
{
     string str;
     cout<<"Enter a string: ";
     getline(cin, str);
     cout<<"after the replaced spaces string is :"<<replace_space(str);
     return 0;
  
}