//getMin element in order of O(1) time complexity from a stack by getmin() function;
#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> s;
    int mini; // To store the minimum element

public:
    void push(int data) {
        if (s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if (data < mini) {
                int val = 2 * data - mini;
                s.push(val);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    int pop() {
        if (s.empty()) return -1;

        int curr = s.top();
        s.pop();

        if (curr > mini) {
            return curr;
        } else {
            int prevMin = mini;
            mini = 2 * mini - curr;
            return prevMin;
        }
    }

    int top() {
        if (s.empty()) return -1;

        int curr = s.top();
        return (curr < mini) ? mini : curr;
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        return s.empty() ? -1 : mini;
    }
};

int main() {
    MinStack ms;
    ms.push(5);
    ms.push(2);
    cout << "Minimum: " << ms.getMin() << endl; // Output: 2

    ms.pop();
    cout << "Minimum after pop: " << ms.getMin() << endl; // Output: 5

    return 0;
}
