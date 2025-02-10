#include<bits/stdc++.h>
using namespace std;
int getLength(char mess[])
{
     int count=0;
     for(int i=0; mess[i]!='\0'; i++)
     {
        count++;
     }
     return count;
}
void reverse(char mess[], int len)
{
  int s=0, e=len-1;
  while(s<e)
  {
     swap(mess[s++], mess[e]);
  }
}
int main()
{
     char mess[200];
     cout<<"enter message which you want to reverse: "<<endl;
     cin>>mess;
     cout<<"the original message is: "<<endl;
     cout<<mess;
     int n=getLength(mess);
     cout<<"the reverse message is: "<<endl;
     reverse(mess, n);
     cout<<mess;

     

}