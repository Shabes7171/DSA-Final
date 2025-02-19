//Q-> given a phone keyboard and n digit number which is represented by array a[], the task is to list all words whih are possible by pressing these numbers:
#include<bits/stdc++.h>
using namespace std;
vector<string> keys = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
     vector<string>ans;
void possibleWords(int a[], int n, string temp, int idx)
{
     if(idx==n)
     {
          ans.push_back(temp);
          return ;
     }
     for(int j=0; j<keys[a[idx]].size(); j++)
     {
       possibleWords(a, n, temp+keys[a[idx]][j], idx+1);
     }
}
int main()
{
     int n;
     cout<<"Enter the length of the number: ";
     cin>>n;
     int a[n];
     cout<<"Enter the number: ";
     for(int i=0; i<n; i++)
          cin>>a[i];
     vector<string>temp;
     possibleWords(a, n, "", 0);

     cout<<"All possible words: "<<endl;
     for(auto x: ans)
         {
                cout<<x<<" ";
         }
     return 0;

}

//input : Enter the length of the number: 2
// Enter the number: 2
// 3
//output:
// All possible words: 
// ad ae af bd be bf cd ce cf