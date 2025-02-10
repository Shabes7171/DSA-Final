// basic program;
#include<iostream>
#include <cmath>
using  namespace std;
// void print()
// {
//      cout<<"function called"<<endl;
// }
// int main()
// {
//      print();
//      return 0;

// }

// // f2
// int  printValue()
// {
//     return 56;
// }
// int main()
// {
//     int a= printValue();
//     cout<<a<<endl;
//      return 0;
     
// }

//f3 (sum calculate)

// int sum(int a, int b) parameters
// {
//      return a+b;

// }
// int main()
// {
//      int n1, n2;
//      cout<<"enter any two number to add"<<endl;
//      cin>>n1>>n2;
//      cout<<sum(n1, n2); argumets
//      return 0;
// }

//f4 (min number)

// int min(){
//      int n1=4, n2=6;
//      return (n1<n2)?n1:n2;
// }
// int main()
// {
//      // int n1, n2;
//      // cout<<"enter any two number to find min"<<endl;
//      // cin>>n1>>n2;
//      cout<<min();
//      return 0;
// }

// // f5 (calculate sum from 1 to n);
//  int numberSum(int arr[], int n)
//  {
//      int sum=0;
//      for(int i=1; i<=n; i++)
//      {
//           sum+=arr[i];
          
//      }
//      return sum;
//  }
// int main()
// {
//      int n;
//      cout<<"enter number of elements to calculate sum"<<endl;
//      cin>>n;
//      int arr[n];
//      cout<<"enter elements to calculate sum"<<endl;
//      for(int i=1; i<=n; i++)
//      {
//           cin>>arr[i];
//      }
//     cout<<numberSum(arr,n);
// }

  // f6 (calculate N factorial)
// int factorial(int n)
// {
//      if(n==1 || n==0)
//      {
//           return 1;

//      }else{
//           return n*factorial(n-1);  
//      }
// }
// int main()
// {
//      int n;
//      cout<<"enter number to calculate factorial"<<endl;
//      cin>>n;
//      cout<<factorial(n);
//      return 0;
// }

// // 2nd method
// int fact(int n)
// {   
//      int fact=1;
//      for(int i=1; i<=n; i++)
//      {
//           fact*=i;
//      }
//      return fact;
// }
// int main()
// {
//      int n;
//      cout<<"enter number to calculate factorial"<<endl;
//      cin>>n;
//      cout<<fact(n);
//      return 0;
// }

 //f7 (calculate sum of digits)
//  int sumOfDigits(int n)
//  {
//      int sum=0;
//      while(n!=0)
//      {
//           sum+=n%10;
//           n=n/10;
//      }
//      return sum;
//  }
//  int main()
//  {
//      cout<<sumOfDigits(123)<<endl;
//      return 0;
//  }

 // f8 (calculate nCr binomial coeficients)

//  int factorial(int n)
// {
//   int fact=1;
//   for(int i=1; i<=n; i++)
//   {
//      fact*=i;
//   }
//   return fact;
// }
// int ncr(int n, int r)
// {
//      int fact_n=factorial(n);
//      int fact_r=factorial(r);
//      int fact_NminusR=factorial(n-r);
//      return fact_n/(fact_r * fact_NminusR);
// }
// int main()
// {
//      int n, r;
//      cin>>n>>r;
//      cout<<ncr(n, r);
//      return 0;

//

  //f9 (to check prime number)
   
  //  int isPrime(int n)
  //  {
  //    if(n<=1)
  //    {
  //         return 0;
  //    }else {
  //      for(int i=2; i<=sqrt(n); i++)
  //      {
  //           if(n%i==0)
  //           {
  //                return 0;
  //           }
  //      }
  //      return 1;
  //    }
  //  }
  //  int main()
  //  {
  //   int n;
  //   cin>>n;
  //   if(isPrime(n))
  //   {
  //      cout<<n<<" is prime number"<<endl;
  //   }
  //   else{
  //     cout<<n<<" is not prime number"<<endl;
  //   }
  //  }

    // f10 (to print  all prime numbers in a given range)
    // bool prime(int n)
    // {
    //    if(n<=1)
    //    {
    //         return false;
    //    }
    //    for(int i=2; i<=sqrt(n); i++)
    //    {
    //         if(n%i==0)
    //         {
    //              return false;
    //         }
    //    }
    //    return true;
    // }
    // void PrimeNumbers(int n){
    //   int count=0;
    //   int num=2;
    //   if(count<=n)
    //   {
    //     if(prime(num))
    //     {
    //       cout<<num<<endl;
    //       count++;
    //     }
    //     num++;
    //   }
    //   cout<<endl;

    // }
    // int main()
    // {
    //   int n;
    //   cin>>n;
    //   PrimeNumbers(n);
    // }

    // f11 (nth fibonacci series)
     
    //  void series(int n)
    //  {
    //   int a=0, b=1;
    //   cout<<a<<" "<<b<<" ";
    //   for(int i=2; i<n; i++)
    //   {
    //     int c=a+b;
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    //   }
    //  }
    //  int main()
    //  {
    //   int n;
    //   cin>>n;
    //   series(n);
    //   return 0;
    //  }

    // power of two by set bit method;
    int main()
    {
      int n;
      cin>>n;
      int count=0;
      while(n!=0)
      {
        count+=n & 1;
        n=n>>1;
       
      }
       if(count==1)
        {
          cout<<"the given number is power of 2 :"<<endl;
           
        }
        else{
          cout<<"the given number is not power of 2 :"<<endl;
        }
    }