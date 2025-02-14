#include<bits/stdc++.h>
using namespace std;
void printNBRS(int n)
{
     if(n==1)
     { 
          cout<<"1\n";
          return ;
     }
     cout<<n<<" ";
     printNBRS(n-1);
}
int main()
{
     int num;
     cout<<"enter number: "<<endl;
     cin>>num;
     printNBRS(num);
}