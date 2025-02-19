#include<bits/stdc++.h>
using namespace std;
bool Knows(vector<vector<int>>&m, int a, int b, int n)
{
     if(m[a][b]==1)
     {
          return true;
     }
     else{
          return false;
     }
}
int celebrity(vector<vector<int>>&m, int n)
{
     stack<int>s;
     //step-1:-push all elements into the stack;
     for(int i=0; i<n; i++)
     {
          s.push(i);

     }
     while(s.size()!=1)
     {
          int a=s.top();
          s.pop();
          int b=s.top();
          s.pop();
          if(Knows(m, a, b, n))
          {
               s.push(b);
          }
          else
          {
               s.push(a);
          }
     }
     //step-3: single element in the stack is potential candidate for the celebrity;
     //verify it;
     //1:-rowcheck;
     int candidate=s.top();
     int zeroCount=0;
     bool rowcheck=false;
     for(int i=0; i<n; i++)
     {
          if(m[candidate][i]==0)
          {
               zeroCount++;
          }
     }
     if(zeroCount==n)
     {
          rowcheck=true;
     }
     //check column;
     bool columnCheck=false;
     int OneCount=0;
     for(int i=0; i<n; i++)
     {
          if(m[i][candidate]==1)
          {
               OneCount++;
          }
     }

     if(OneCount==n-1)
     {
          columnCheck=true;
     }
     if(rowcheck==true && columnCheck==true)
     {
          return candidate;
     }
     else{
          return -1;
     }

}
int main()
{
     int n=3;
     vector<vector<int>>m={{0, 1, 0},
                           {0, 0, 0},
                           {0, 1, 0}
                         };
                           
     int celebriti=celebrity(m, n);
     cout<<"celebrity is: "<<celebriti;
}

// input: N=3, 
// M[3][3]={
//      {0, 1, 0},
//      {0, 0, 0},
//      {0, 1, 0}
// };
// output:=1;
// explanation: 0th and 2nd person both know 1. therefore, 1 is the celebrity.
