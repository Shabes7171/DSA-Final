#include<bits/stdc++.h>
using namespace std;
int mini_cost_to_make_(string &str)
{
     stack<int>stk;
     if(str.length()%2==1)
     {
          cout<<"invalid string"<<endl;
          return -1;
     }
     for(int i=0; i<str.length(); i++)
     {
          char ch=str[i];
          if(ch=='{')
          {
               stk.push(ch);
          }
          else{
               if(!stk.empty() && stk.top()=='{')
               {
                    stk.pop();
               }
               else{
                    stk.push(ch);
               }
          }
     }
          // now stack n contain invalid expression;
          int a=0, b=0;
          while(!stk.empty())
          {
               if(stk.top()=='{')
               {
                    b++;
               } 
               else{
                    a++;
               } 
               stk.pop();
          }

          return (a+1)/2+(b+1)/2;
     
}

    
int main()
{
     string str;
     cout<<"enter string: "<<endl;
     getline(cin, str);
     cout<<"minimum cost to make valid expression: "<<mini_cost_to_make_(str)<<endl;
     return 0;
 
}