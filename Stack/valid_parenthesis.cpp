#include<bits/stdc++.h>
using namespace std;
bool check_valid(string &str)
{
     stack<char>st;
     for(int i=0; i<str.length(); i++)
     {
          char ch=str[i];
          if(ch=='{' || ch=='(' || ch=='[')
          {
               st.push(ch);
          }
          else {
               if(!st.empty())
               {
                    char top=st.top();
                    if(top=='{' && ch=='}' || top=='[' || ch==']' || top=='(' && ch==')')
                    {
                       st.pop();  
                    }
                    else{
                         return false;
                    }
               }
               else return false;
             
          }
     }
     if(st.empty())
     {
          return true;
     }
     else return false;
}
int main()
{
     string str;
     cout<<"enter parenthesis string: "<<endl;
     cin>>str;
     if(check_valid(str))
     {
          cout<<str<<" is a valid expression."<<endl;
     }
     else cout<<str<<" is not a valid expression."<<endl;
     return 0;



}