#include <bits/stdc++.h>
using namespace std;

bool checkEqual(int a[26], int b[26]) {
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Enter s1 and s2: " << endl;
    cin >> s1 >> s2;

    if (s1.length() > s2.length()) {
        cout << "False" << endl;
        return 0; // s1 cannot be a permutation of any substring in s2 if it's longer
    }

    int count[26] = {0};
    for (char c : s1) {
        count[c - 'a']++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // First window of size `s1.length()`
    for (; i < windowSize; i++) {
        count2[s2[i] - 'a']++;
    }

    // Check for the first window
    if (checkEqual(count, count2)) {
        cout << "True" << endl;
        return 0;
    }

    // Sliding window
    while (i < s2.length()) {
        count2[s2[i] - 'a']++; // Add new character to window
        count2[s2[i - windowSize] - 'a']--; // Remove old character from window
        i++;

        if (checkEqual(count, count2)) {
            cout << "True" << endl;
            return 0;
        }
    }

    cout << "False" << endl;
    return 0;
}
