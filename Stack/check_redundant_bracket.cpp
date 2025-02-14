#include <bits/stdc++.h>
using namespace std;

bool check_redundant(string &str) {
    stack<char> st;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } 
        else if (ch == ')') { 
            bool isredundant = true;

            while ( st.top() != '(') {
                char top = st.top();

                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isredundant = false;  // Found an operator, so it's not redundant
                }
                
                st.pop();
            }

            if (!st.empty()) {
                st.pop();  // Pop the opening '('
            }

            if (isredundant) {
                return true;  // If no operator was found between '()', it's redundant
            }
        }
    }

    return false;  // If we never found redundancy, return false
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin.ignore();  // Ignore any leftover newline characters
    getline(cin, str);  // Read the entire input line

    if (check_redundant(str)) {
        cout << "The string has redundant parentheses." << endl;
    } else {
        cout << "The string does not have redundant parentheses." << endl;
    }

    return 0;
}
