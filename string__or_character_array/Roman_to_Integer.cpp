// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
#include <bits/stdc++.h>
using namespace std;

int num(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return 0; 
}

int Roman_to_Integer(string s) {
    if (s.empty()) return 0; 

    int sum = 0, idx = 0;
    while (idx < s.size() - 1) {
        if (num(s[idx]) < num(s[idx + 1])) {
            sum -= num(s[idx]);
        } else {
            sum += num(s[idx]);
        }
        idx++;
    }
    sum += num(s[idx]); 

    return sum;
}

int main() {
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s; 
    cout << "The integer value of the Roman numeral is: " << Roman_to_Integer(s) << endl;
    return 0;
}
