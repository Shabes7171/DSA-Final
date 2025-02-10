// Example 1:

// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
#include<bits/stdc++.h>
using namespace std;
bool checkPangram(string s)
{
     int  arr[26]={0};
     for(int i=0; i<s.length(); i++)
     {
         arr[s[i]-'a']=1;


     }
     for(int i=0; i<26; i++)
     {
          if(arr[i]==0)
          {
               return false;
          }
     }
     return true;
}
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    if(checkPangram(str))
    {
     cout<<" is a pangram."<<endl;
    }
    else{
     cout<<" is not a pangram."<<endl;
    }
     
     
}