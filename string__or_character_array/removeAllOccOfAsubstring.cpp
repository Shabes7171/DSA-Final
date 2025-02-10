#include<bits/stdc++.h>
using namespace std;
string removeSubStr(string str,  string substr)
{
     while(str.length()!=0 && str.find(substr)<str.length())
     {
       str.erase(str.find(substr), substr.length());
     }
     return str;
}
int main()
{
     string str, part;
     cout<<"enter string: "<<endl;
     getline(cin, str);
     cout<<"enter string part:"<<endl;
     getline(cin, part);
     cout<<"after removing the substring in the string: "<<removeSubStr(str, part)<<endl;

}