#include<bits/stdc++.h>
using namespace std;
int main()
{
     stack<int>s;
     //insertion
     s.push(3);
     s.push(2);

     //deletion;
     s.pop(); //remove top element from the stack;

     cout<<"printing top element:"<<s.top()<<endl;
     
     //check stack is empty:
     if(s.empty())
     {
          cout<<"stack is empty:"<<endl;

     }
     else{
          cout<<"stack is not empty: "<<endl;
     }


}