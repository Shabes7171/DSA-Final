#include<bits/stdc++.h>
using namespace std;
vector<int > next_smaller(vector<int> &arr)
{
     vector<int>result(arr.size());
     stack<int>s;
     s.push(-1);
     for(int i=arr.size()-1; i>=0; i--)
     {
          int currt=arr[i];
          while(s.top()>=currt)
          {
               s.pop();
             
          }
          result[i]=s.top();
          s.push(currt);

     }
     return result;
}
int main()
{
     int size;
     cout<<"Enter the size of array: "<<endl;
     cin>>size;
     vector<int>arr(size);
   
     cout<<"Enter the elements: "<<endl;
     for(int i=0; i<size; i++)
     {
       cin>>arr[i];
     }
     vector<int>ans =next_smaller(arr);
     cout<<"Next smaller element for each index are: ";
     for(int i=0; i<ans.size(); i++)
     {
          cout<<ans[i]<<" ";
     }
   return 0;
}

// input:  3  2  1 ;
//         |  |  |
// output: 2  1 -1 ;