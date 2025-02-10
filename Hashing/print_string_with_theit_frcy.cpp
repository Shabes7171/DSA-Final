//given n strings, print unique strings in lexographical order with their frqncy;
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the number of strings: ";
     cin>>n;
     map<string, int > mp;
     for(int i=0; i<n; i++)
     {
          string s;
        
          cin>>s;
          mp[s]++;
     }
     cout<<"printing unique strings with frqcy:"<<endl;
     for(auto pr: mp)
     {
           cout<<pr.first<<" "<<pr.second<<endl;
     }

}