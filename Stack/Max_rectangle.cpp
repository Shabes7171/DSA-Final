#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        while (s.top() != -1 && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &arr, int n) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        while (s.top() != -1 && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &M, int n) {
    vector<int> next = nextSmallerElement(M, n);
    vector<int> prev = prevSmallerElement(M, n);

    int area = 0;
    for (int i = 0; i < n; i++) {
        if (next[i] == -1) {
            next[i] = n;
        }
        int width = next[i] - prev[i] - 1;
        int newArea = M[i] * width;
        area = max(area, newArea);
    }
    return area;
}

int maximalRectangle(vector<vector<int>> &matrix) {
    if (matrix.empty()) return 0;

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> heights(m, 0);
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            heights[j] = (matrix[i][j] == 0) ? 0 : heights[j] + 1;
        }
        maxArea = max(maxArea, largestRectangleArea(heights, m));
    }
    return maxArea;
}

int main() {
    vector<vector<int>> M = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0}
    };

    int maxArea = maximalRectangle(M);
    cout << "Largest Rectangle Area: " << maxArea << endl;

    return 0;
}
