#include<bits/stdc++.h>
using namespace std;
int FibonacciTerm(int n)
{
     if(n==0||n==1)
     {
          return n;
     }
     
     int result=FibonacciTerm(n-2)+FibonacciTerm(n-1);
     return result;
}
int main()
{
     int num=5;
     cout<<FibonacciTerm(num);
     
}