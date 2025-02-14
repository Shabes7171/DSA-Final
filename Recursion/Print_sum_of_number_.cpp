#include<bits/stdc++.h>
using namespace std;
int sum(int num)
{
     if(num==1)
     {
          return 1;
     }
     return num+sum(num-1);
}
int main()
{
     int num;
     cout<<"enter number: "<<endl;
     cin>>num;
     cout<<"sum: "<<sum(num);
     return 0; 
}