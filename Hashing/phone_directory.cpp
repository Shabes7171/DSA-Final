#include<bits/stdc++.h>
using namespace std;
void search( unordered_map<string, int> &directory)
{
     string name;
     cout<<"enter name that you want to search"<<endl;
     cin>>name;
     unordered_map<string, int>:: iterator i;
     for(auto i=directory.begin(); i!=directory.end(); i++)
     {
          if(i->first==name)
          {
               cout<<i->second<<endl;
          }
     }
}
int main()
{
     unordered_map<string, int>directory;
     // pair<string, int>con=make_pair("shabes", 0022);
     // directory.insert(con);
     directory["shabes"]=556644;
     directory["naved"]=19988;
     directory["Raja"]=1112233;
     search(directory);
     return 0;
     
}