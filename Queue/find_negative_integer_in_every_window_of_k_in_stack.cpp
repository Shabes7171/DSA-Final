#include<bits/stdC++.h>
using namespace std;
void find_min(int *arr, vector<int>&ans, int size,int k)
{
     deque<int>dq;
     for(int i=0; i<k; i++)
     {
          if(arr[i]<0)
          {
               dq.push_back(i);
          }
     }
     if(dq.size()>0)
     {
        ans.push_back(arr[dq.front()]);
     }
     else{
          ans.push_back(0);
     }
        //process remaining windows :
        for(int i=k; i<size; i++)
        {
             if(!dq.empty() && i-dq.front()>=k)
             {
               dq.pop_front();
             }  
             //addition
          if(arr[i]<0)
          {
               dq.push_back(i);
          } 
          if(dq.size()<0)
          {
               ans.push_back(arr[dq.front()]);
          }
          else{
               ans.push_back(0);
          }
          }      
}
int main()
{
     int arr[]={-8, 2, 3, -6, 10};
     int size=sizeof(arr) / sizeof(arr[0]);
     vector<int>ans;
     int k;
     cout<<"enter window size: "<<endl;
     cin>>k;
     find_min(arr, ans, size, k);
     cout<<"minimum values in sliding window: ";
     for(int i=0; i<ans.size(); i++)
     {
          cout<<ans[i]<<" ";
     }
}