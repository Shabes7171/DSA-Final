#include<bits/stdc++.h>
using namespace std;
int main()
{
     //creation
     unordered_map<string, int>m;

     //insertion;
     //1
     pair<string, int>p= make_pair("brother", 3);
     m.insert(p);
     
     //2
     pair<string, int>p2("sister", 2);
     m.insert(p2);

     //3
     m["parents"]=1;
     m["strangers"]=4;

     //search;
     cout<<m["brother"]<<endl;
     //or
     cout<<m.at("sister")<<endl;

     //check present or absent;
     cout<<m.count("sister")<<endl; //gives-> 1
     cout<<m.count("name")<<endl; //gives-> 0

     cout<<"size -> "<<m.size()<<endl;
     //erase function;
      m.erase("strangers");
     cout<<"size -> "<<m.size()<<endl;

     //1-traversal;
     cout<<"first traversal: "<<endl;
     for(auto i:m)
     {
          cout<<i.first<<" "<<i.second<<endl;

     }

     //2-traversal;
     cout<<"second traversal: "<<endl;
     unordered_map<string, int>:: iterator it= m.begin();
     while(it!=m.end())
     {
          cout<<it->first<<" "<<it->second<<endl;
          it++; 
     }
     return 0;
}