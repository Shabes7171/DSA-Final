#include <bits/stdc++.h>
using namespace std;
bool check_can_make_equal(vector<string> &v)
{
   int n=v.size();
   unordered_map<char, int>mp;
   for(auto str:v)
   {
     for(char c:str)
     {
        mp[c]++;
     }
   }
   for(auto ele:mp)
   {
     if(ele.second%n!=0)
     {
          return false;
     }
   }
   return true;
}
int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<string> arr(size); 

    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    
    bool result = check_can_make_equal(arr);
    if(result)
    {
      cout << "Array can be made equal by shifting characters." << endl;
    }
    else{
      cout << "Array cannot be made equal by shifting characters." << endl;
    }

    return 0;
}

// input: 
// khankh, kh, anan;
// output: 
//  Array cannot be made equal by shifting characters.
