// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   string str;
//   cout<<"enter string:"<<endl;
//   getline(cin, str);
//   cout<<"your original string is: "<<str<<endl;
//   stack<string>stk;
//   for(int i=0; i<str.length(); i++)
//   {
//      stk.push(i);
//   }
//}

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter string: " << endl;
    getline(cin, str);
    cout << "Your original string is: " << str << endl;

    stack<char> stk; // Stack for storing indices
    for (int i = 0; i < str.length(); i++) {
        stk.push(str[i]);
    }

    // Just demonstrating stack usage by printing indices
    cout << "Stored indices in the stack: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}
