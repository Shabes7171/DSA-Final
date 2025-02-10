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
int main()
{
     char arr[200];
     cout<<"enter message: "<<endl;
     cin>>arr;
     cout<<"Character is:"<<toLower('A')<<endl;
     cout<<"character is: "<<toLower('b')<<endl;
}