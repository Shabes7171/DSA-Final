// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      int number;
//      cout<<"enter numbert to check: "<<number<<endl;
//      cin>>number;
//      for(int i=1; i<number; i++)
//      {
//           if(i*i==number)
//           {
//                cout<<number<<" is perfect square of "<<i<<endl;
//                return 0;
//           }
          
//      }
//      cout<<number<<" is not perfect square."<<endl;
//      return 0;
 
// }
#include<bits/stdc++.h>
using namespace std;
int squareR(int num)
{
     int s=0, e=num-1;
     int mid=s+(e-s)/2;
     while(s<=e)//iiii
     {
          if(mid*mid==num)
          {
               return mid;
          }
          else if(mid*mid<num)
          {
               s=mid+1;
          }
          else {
               e=mid-1;
          }
          mid=s+(e-s)/2;
     }
     return -1;
}
double MorePrecision(int num, int precisions, int tempsol)
{
    
     double factor=1;
      double ans=tempsol;
     for(int i=0; i<precisions; i++)
     {
          factor=factor/10;
          for(double j=ans; j*j<num; j=j+factor)
          {
               ans=j;
          }
     }
     return ans;
     
}
int main()
{
     int num;
     cout<<"enter number: "<<endl;
     cin>>num;
     int precision;
     cout<<"enter precision: "<<endl;
     cin>>precision;
     int tempsol=squareR(num);
     cout<<"answer is: "<<MorePrecision(num, precision, tempsol)<<endl;

}
