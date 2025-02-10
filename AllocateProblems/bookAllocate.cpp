// #include<bits/stdc++.h>
// using namespace std;
// bool isPossible(int arr[], int books, int stdnt, int mid)
// {
//      int studentCount=1;
//      int pageSum=0;
//      for(int i=0; i<books; i++)
//      {
//           if(pageSum+arr[i]<=mid)
//           {
//                pageSum+=arr[i];
//           }
//           else{
//                studentCount++;
//                if(studentCount>stdnt || arr[i]>mid)
//                {
//                     return false;
//                }
//                pageSum=arr[i];

//           }
//      }
//      return true;
// }

//  int main()
//  {
//      int books;
//      cout<<"enter the number of bookd: "<<endl;
//      cin>>books;
//      int stdnt;
//      cout<<"enter number of students: "<<endl;
//      cin>>stdnt;
//      int arr[100];
//      cout<<"enter books pages: "<<endl;
//      for(int i=0; i<books; i++)
//      {
//           cin>>arr[i];
//      }
//      int s=0, sum=0;
//      for(int i=0; i<books; i++)
//      {
//           sum+=arr[i];
//      }
//      int e=sum;
//      int ans=-1;
//      int mid=s+(e-s)/2;
//      while(s<e)
//      {
//        if(isPossible(arr, books, stdnt, mid))
//        {
//           ans=mid;
//           e=mid-1;
//        }
//        else{
//           s=mid+1;
//        }
//        mid=s+(e-s)/2;
//      }
//      cout<<"minimum number of students required: "<<ans<<endl;
//      return 0;
//  }

// 2nd approach book allocation
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int n, int m, int maxallow)
{
    int studentCount = 1;
    int pagesum=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxallow)
        {
            return false;
        }
        if(pagesum+arr[i]<=maxallow)
        {
            pagesum+=arr[i];
        }
        else{
            studentCount++;
            pagesum=arr[i];
        }
        
    }
    return studentCount>m? false: true;
}
int bookallocation(int arr[], int n, int m)
{
    int s = 0, sum;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if(m>n)
        {
            return -1;
        }
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter number of books: " << endl;
    cin >> n;
    int m;
    cout << "enter number of students:" << endl;
    cin >> m;
    int arr[100];
    cout << "enter the number of books pages: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result=bookallocation(arr, n, m);
    if(result )
    {
        cout << "Minimum number of students required: " << result << endl;
    }
    else{
        cout << "Not possible to distribute the books among the students." << endl;
    }
    return 0;
}
