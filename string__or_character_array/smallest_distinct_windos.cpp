// #include<bits/stdc++.h>
// using namespace std;
// int distictStr(string str)
// {
//      int f=0, s=0, diff=0, len=100;
//      vector<bool>count(256, 0);
//      while(f<str.size())
//      {
//           if(count[str[f]]==0){
//                 diff++;
//           }
            
//           count[str[f]]++;
//             f++;
//      };
//      for(int i=0; i<str.size(); i++)
//      {
//           count[i]=0;
//      }
//      f=0;
//      while(s<str.size() && s<str.size())
//      {
//           while(diff)
//           {
//            if(count[str[s]]==0)
//                diff--;

//                count[str[s]]++;
//                s++;
           
//           }
//           len=min(len, s-f);

//           while(diff!=1)
//           {
//             len=min(len, s-f);
//             count[str[f]]--;
//             if(count[str[f]]==0)
//                diff++;
//                f++;
            
//           }
//      }
//      return len;
// }
// int main()
// {
//      string str;
//      cout<<"enter string"<<endl;
//      getline(cin, str);
//      cout<<"length of longest substring without repeating characters: "<<distictStr(str);
//      return 0;
 
// }

#include <bits/stdc++.h>
using namespace std;

int distictStr(string str) {
    int f = 0, s = 0, diff = 0, len = INT_MAX;
    vector<int> count(256, 0); // Use int instead of bool for frequency tracking

    // Count the number of distinct characters
    unordered_set<char> unique_chars(str.begin(), str.end());
    diff = unique_chars.size();

    int required = diff;

    while (s < str.size()) {
        if (count[str[s]] == 0) {
            diff--;
        }
        count[str[s]]++;
        s++;

        // When all unique characters are found, try minimizing the window
        while (diff == 0) {
            len = min(len, s - f);

            count[str[f]]--;
            if (count[str[f]] == 0) {
                diff++;
            }
            f++;
        }
    }

    return len;
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    cout << "Length of smallest substring containing all distinct characters: " << distictStr(str) << endl;
    return 0;
}
