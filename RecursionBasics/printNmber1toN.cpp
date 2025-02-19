#include<bits/stdc++.h>
using namespace std;
//print numbers 1 to N;
void printNum(int num)
{
     if(num==1)
     {    cout<<num<<" ";
          return ; 
     }
  
     printNum(num-1);
     cout<<num<<" ";  
    
}

/// print numbers N to 1;
// void printNum(int num)
// {
//      if(num==1)
//      {    cout<<num<<" ";
//           return ;
//      }
//      cout<<num<<" ";  
//      printNum(num-1); 
// }
int main()
{
     int num;
     cout<<"Enter a number: ";
     cin>>num;
     printNum(num);
}