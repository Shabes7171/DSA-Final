#include<bits/stdc++.h>
using namespace std;
int powerOfTwo(int n)
{
     if(n==0)
     {
          return 1;
     }
     int result=2*powerOfTwo(n-1);
     return result;
}
int main()
{
     int n;
     cout<<"Enter number: ";
     cin>>n;
     cout<<powerOfTwo(n);
}