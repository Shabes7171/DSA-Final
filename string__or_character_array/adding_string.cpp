// Input: num1 = "11", num2 = "123"
// Output: "134"
#include<bits/stdc++.h>
using namespace std;
string addition(string num1, string num2)
{
     int idx1=num1.size()-1, idx2=num2.size()-1;
     int sum=0, carry=0;
     string ans;
     while(idx2>=0)
     {
          sum=(num1[idx1]-'0')+(num2[idx2]-'0')+carry;
          carry=sum /10;
          char c='0'+sum%10;
          ans+=c;
          idx1--, idx2--;

     }
     while(idx1>=0)
     {
          sum=num1[idx1]-'0'+carry;
          carry=sum/10;
          char c='0'+sum%10;
          ans+=c;
          idx1--;
     }
  if(carry)
  {
     ans+='1';
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int main()
{
     string num1, num2;
     cout<<"enter string number n1, and n2: "<<endl;
     getline(cin, num1);
     getline(cin, num2);
     
     cout<<"the adding string is: "<<addition(num1, num2);
     return 0;


}
