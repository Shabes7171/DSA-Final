#include<bits/stdc++.h>
using namespace std;
string defangingMSG(string msg)
{
     int i=0;
     string ans;
     while(i<msg.size())
     {
        if(msg[i]=='.')
        {
        ans=ans+"[.]";
    
        }
        else{
          ans=ans+msg[i];
        }
            i++;
     }
     return ans;
}
int main()
{
     string msg;
     cout<<"enter msg: "<<endl;
     getline(cin, msg);
     cout<<"defanged message: "<<defangingMSG(msg);
     return 0;

}


// input: 1.1.1.1.1;
// output: 1[.]1[.]1[.]1[.]1;

// #include<bits/stdc++.h>
// using namespace std;
// bool checkPali(string str)
// {
//      int s=0, e=str.size()-1;
//      while(s<e)
//      {
//          if(str[s]!=str[e])
//          {
//           return false;
//          }
//           s++, e--;
//      }
//      return true;
// }
// int main()
// {
//      string str;
//      cout<<"enter string that you want to chech wether it is palindrom or not"<<endl;
//      getline(cin, str);
//      if(checkPali(str))
//      {
//           cout<<str<<" is a palindrom."<<endl;
//      }
//      else{
//           cout<<str<<" is not a palindrom."<<endl;
//      }
//      return 0;

// }