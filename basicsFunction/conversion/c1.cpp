#include <iostream>
#include<math.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n; 
//     int ans = 0; 
//     int i = 0; 
//     while (n != 0)
//     {
//         int bit = n & 1; 
//         ans = bit * pow(10, i) + ans; 
//         n = n >> 1;
//         i++;
//     }

//     cout << ans; 
//     return 0;
// }
 
 //2nd approach
//  int main()
//  {
//   int n;
//   cin>>n;
//   int rem, ans=0;
//   int mult=1;
//   while(n>0)
//   {
//     rem=n%2;
//     n=n/2;
//     ans=rem* mult+ans;
//     mult=mult*10;
//   }
//   cout<<ans;
//   return 0;
//  }

//b to d
// int main()
// {
//   int n;
//   cin>>n;
//   int dig, ans=0,mult=1;
//  while(n>0)
//  {
//   dig=n%10;
//   ans=dig * mult+ans;
//   n=n/10;
//   mult=mult*2;
//  }
//  cout<<ans;
// }

//2nd approach
// int main()
// {
//   int n;
//   cin>>n;
//   int ans=0, i=0;
//   while(n!=0)
//   {
//     int dig=n&10;
//     if(dig==1){
//       ans= ans+pow(2, i);
//     }
//      n=n/10;
//     i++;
//   }
//   cout<<ans;
//   return 0;
// }

// Complement of Base 10 Integer
// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.

// int main()
// {
//   int n;
//   cin>>n;
//   int m=n;
  
//   int mask=0;
//   if(n==0)
//   {
//     return 1;
//   }
//   while(m!=0)
//   {
//      mask=(mask <<1) |1;
//      m=m>>1;
//   }
//   int ans=~n & mask;
//   cout<<ans;
//   return 0;

// }/

// calculate power of two [Given an integer n, return true if it is a power of two. Otherwise, return false.]
// Example:

// Input: n = 16
// Output: true
// Explanation: 24 = 16

// int main()
// {
//   int n;
//   cin>>n;
//   for(int i=0; i<=30; i++)
//   {
//     int ans=pow(2, i);
//     if(ans==n)
//     {
//     cout<< n <<" the given number is a power of two."<<endl;
//     return 0;
//     }
//   }
//  cout<< n  <<" the given number is not a power of two."<<endl;
//   return 0;
// }

// switch case;
// int main()
// {
//   int num;
//   cout<<"Enter a number between 1 and 3: ";
//   cin>>num;

//   switch(num)
//   {
//     case 1: cout<<"one"<<endl;
//     break;
//     case 2: cout<<"two"<<endl;
//     break;
//     case 3: cout<<"three"<<endl;
//     break;
//     default: cout<<"unkown number dal diya bhai tune: "<<endl;
//   }
// }

// calculator;
int main()
{
  int a, b;
  cout<<"enter any two numbers : "<<endl;
  cin>>a>>b;
  char op;
  cout<<"enter an operator (+,-,*,/): "<<endl;
  cin>>op;
  switch(op)
  {
    case '+': cout<<"the result is = "<<a+b<<endl;
    break;
    case '-': cout<<"the result is - "<<a-b<<endl;
    break;
    case '*': cout<<"the result is * "<<a*b<<endl;
    break;
    case '/': cout<<"the result is / "<<a/b<<endl;
    break;
    default: cout<<"you type a invalid operator";
  }
}