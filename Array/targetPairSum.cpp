#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairsum(int arr[], int size, int target) {
    vector<vector<int>> ans;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    return ans; 
}

int main() {
    int size;
    cout << "Enter array size: " << endl;
    cin >> size;

    int target;
    cout << "Enter target sum: " << endl;
    cin >> target;

    int arr[100];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

  
    vector<vector<int>> result = pairsum(arr, size, target);


    cout << "The target sum pairs are: " << endl;
    for (auto &pair : result) {
        cout << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}
