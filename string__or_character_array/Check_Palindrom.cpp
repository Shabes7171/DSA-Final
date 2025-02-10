#include<bits/stdc++.h>
using namespace std;
char toLower(char arr)
{
     if(arr>='a' && arr<='z')
     {
         return arr;
     }
     else{
          char temp=arr-'A'+'a';
     }
}
bool checkPalindrom(char mess[], int lnth)
{
  int s=0, e=lnth-1;
 while(s<=e)
  {
     if(toLower(mess[s])!=toLower(mess[e]))
     {
       return 0;
     }
     else{
          s++;
          e--;
     }
  }
  return 1;
}

int getLength(char mess[])
{
     int count=0;
     for(int i=0; mess[i]!='\0'; i++)
     {
          count++;
     }
     return count;
}
int main()
{
     char mess[200];
     cout<<"enter message:"<<endl;
     cin>>mess;
     int length=getLength(mess);
     bool result=checkPalindrom(mess, length);
     if(result)
     {
          cout<<"message is palindrome"<<endl;
     }
     else{
          cout<<"message is not palindrome"<<endl;
     }
     return 0;
}