#include<bits/stdc++.h>
using namespace std;
int NoOfWays(int stairs)
{
     if(stairs==1 || stairs==2)
     {
          return stairs;
     }
     int result=NoOfWays(stairs-1)+NoOfWays(stairs-2);
     return result;
}
int main()
{
     int stairs;
     cout<<"Enter the number of stairs: ";
     cin>>stairs;
     cout<<NoOfWays(stairs);
     return 0;
}