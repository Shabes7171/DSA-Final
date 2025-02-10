#include<bits/stdc++.h>
using namespace std;
void reverseString(char arr[], int n)
{
     int s=0, e=n-1;
     while(s<e)
     {
          swap(arr[s++], arr[e--]);
     }
}
int getCount(char arr[])
{
    int  count=0;
    for(int i=0; arr[i]!='\0'; i++)
    {
     count++;
    }
    return count;

}
int main()
{
     char arr[29];
     cout<<"enter message here: "<<endl;
     cin>>arr;
     // arr[3]='\0';
     cout<<"your message is: "<<endl;
     cout<<arr;
     int length=getCount(arr);
     cout<<"the reverse string is: "<<endl;
     reverseString(arr, length);
     cout<<arr;
     
}