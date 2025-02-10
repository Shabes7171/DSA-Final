
// Input: s = "the sky is blue"
// Output: "blue is sky the"

#include<bits/stdc++.h>
using namespace std;
string reverseWinSTR(string str)
{
     int n=str.length();
     
      reverse(str.begin(), str.end());
      string  ans="";
     for(int i=0; i<n; i++){
           string word="";
           
     while(i<n && str[i]!=' ')
     {
        word+=str[i];  
        i++;
     }
     reverse(word.begin(), word.end());
      
     if(word.length()>0)
     {
          ans+=" "+word;
     }

     }
 return ans.substr(1);

}
int main()
{
     string str;
     cout<<"enter any string:"<<endl;
     getline(cin, str);
     cout<<"reversed string with words reversed:"<<endl;
     cout<<reverseWinSTR(str);
     return 0;
   
}