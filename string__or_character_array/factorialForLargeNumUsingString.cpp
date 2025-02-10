#include<bits/stdc++.h>
using namespace std;
void factorial(int num)
{
     vector<int>ans(1, 1);
     while(num>1)
     {
          int carry=0, res, size=ans.size();
          for(int i=0; i<size; i++)
          {
               res=ans[i]*num+carry;
               carry=res/10;
               ans[i]=res%10;
          }
          while(carry)
          {
               ans.push_back(carry%10);
               carry=carry/10;
          }
          num--;
     }
     reverse(ans.begin(), ans.end());
     cout<<"factorial of "<<num<<" is: ";
     for(int i=0; i<ans.size(); i++)
     {
          cout<<ans[i];
     }
}

int main()
{
     int num;
     cout<<"enter number to find it's factorial: "<<endl;
     cin>>num;
     factorial(num);
}