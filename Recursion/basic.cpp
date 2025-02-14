#include<bits/stdc++.h>
using namespace std;
void print(int num)
{
     if(num==1)
     {
          cout<<"1\n";
          return ;
     }
     cout<<num<<" ";
     print(num-1);
}
int fact(int num)
{
     if(num==0)
     {
          return 1;
     }
     return num*fact(num-1);
}
int main()
{
     int num;
     cout<<"enter number to print its series: "<<endl;
     cin>>num;
     // print(num);
     cout<<"now factorial will be: "<<endl;
     cout<<fact(num);
     return 0;
}